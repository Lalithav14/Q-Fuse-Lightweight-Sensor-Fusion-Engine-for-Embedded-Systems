#include "fusion.h"
#include <math.h>

void complementary_filter(float acc_angle, float gyro_rate, float dt, float *angle_estimate) {
    const float alpha = 0.98f;
    *angle_estimate = alpha * (*angle_estimate + gyro_rate * dt) + (1 - alpha) * acc_angle;
}
