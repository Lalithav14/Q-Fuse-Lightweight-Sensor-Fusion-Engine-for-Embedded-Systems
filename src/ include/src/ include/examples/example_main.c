#include <stdio.h>
#include "../include/fusion.h"
#include "../include/imu.h"

int main() {
    float dt = 0.01f;  // 10ms timestep
    float t = 0.0f;
    float angle_estimate = 0.0f;

    printf("Time\tAccAngle\tGyroRate\tEstimate\n");

    for (int i = 0; i < 500; ++i) {
        float acc_angle = simulate_acc_angle(t);
        float gyro_rate = simulate_gyro_rate(t);

        complementary_filter(acc_angle, gyro_rate, dt, &angle_estimate);

        printf("%.2f\t%.2f\t\t%.2f\t\t%.2f\n", t, acc_angle, gyro_rate, angle_estimate);

        t += dt;
    }

    return 0;
}
