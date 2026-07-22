// Copyright (c) 2022 ChenJun
// Licensed under the Apache-2.0 License.

#ifndef RM_SERIAL_DRIVER__PACKET_PARSER_HPP_
#define RM_SERIAL_DRIVER__PACKET_PARSER_HPP_

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <vector>

#include "crc.hpp"
#include "packet.hpp"

namespace rm_serial_driver
{

constexpr uint8_t kReceivePacketHeader = 0x5A;
constexpr uint8_t kLoggerPacketHeader = 0xD5;

enum class ParseStatus {
    kNeedMoreData,
    kFrameReady,
    kCrcFailure,
};

class PacketParser
{
public:
    void append(const uint8_t * data, std::size_t size)
    {
        buffer_.insert(buffer_.end(), data, data + size);
    }

    ParseStatus nextFrame(std::vector<uint8_t> & frame, uint8_t & failed_header)
    {
        const auto header = std::find_if(buffer_.begin(), buffer_.end(), [](uint8_t value) {
            return value == kReceivePacketHeader || value == kLoggerPacketHeader;
        });
        buffer_.erase(buffer_.begin(), header);

        if (buffer_.empty()) {
            return ParseStatus::kNeedMoreData;
        }

        const std::size_t frame_size =
            buffer_.front() == kReceivePacketHeader ? sizeof(ReceivePacket) : sizeof(LoggerPacket);
        if (buffer_.size() < frame_size) {
            return ParseStatus::kNeedMoreData;
        }

        if (!crc16::Verify_CRC16_Check_Sum(buffer_.data(), frame_size)) {
            failed_header = buffer_.front();
            buffer_.erase(buffer_.begin());
            return ParseStatus::kCrcFailure;
        }

        frame.assign(buffer_.begin(), buffer_.begin() + frame_size);
        buffer_.erase(buffer_.begin(), buffer_.begin() + frame_size);
        return ParseStatus::kFrameReady;
    }

    std::size_t bufferedSize() const { return buffer_.size(); }

private:
    std::vector<uint8_t> buffer_;
};

}  // namespace rm_serial_driver

#endif  // RM_SERIAL_DRIVER__PACKET_PARSER_HPP_
