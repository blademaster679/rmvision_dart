#ifndef RM_AUTO_AIM_DART__KALMAN_FILTER_HPP_
#define RM_AUTO_AIM_DART__KALMAN_FILTER_HPP_

namespace rm_auto_aim_dart {

class KalmanFilter {
public:
    // 构造：可指定过程噪声Q和测量噪声R
    KalmanFilter(double process_noise = 1.0, double measurement_noise = 1.0)
        : Q_(process_noise), R_(measurement_noise), x_(0.0), p_(1.0), initialized_(false) {}

    // 手动初始化状态
    void init(double initial_value, double initial_uncertainty) {
        x_ = initial_value;
        p_ = initial_uncertainty;
        initialized_ = true;
    }

    // 设置Q、R
    void setParameters(double process_noise, double measurement_noise) {
        Q_ = process_noise;
        R_ = measurement_noise;
    }

    // 更新：接收测量，返回滤波后估计
    double update(double measurement) {
        if (!initialized_) {
            x_ = measurement;
            p_ = R_;
            initialized_ = true;
            return x_;
        }
        // 预测
        p_ += Q_;
        // 卡尔曼增益
        double K = p_ / (p_ + R_);
        // 校正
        x_ += K * (measurement - x_);
        p_ *= (1 - K);
        return x_;
    }

private:
    double Q_, R_;    // 过程、测量噪声方差
    double x_, p_;    // 状态估计及协方差
    bool initialized_;
};

}  // namespace rm_auto_aim_dart

#endif  // RM_AUTO_AIM_DART__KALMAN_FILTER_HPP_
