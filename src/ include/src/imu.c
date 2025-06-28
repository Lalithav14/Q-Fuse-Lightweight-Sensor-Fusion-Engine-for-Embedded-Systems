#include "imu.h"
#include <math.h>

float simulate_acc_angle(float t) {
    return 10.0f * sinf(t);  // Simulated tilt angle in degrees
}

float simulate_gyro_rate(float t) {
    return 10.0f * cosf(t);  // Simulated rotational rate
}
