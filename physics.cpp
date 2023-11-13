#include "physics.hpp"

float Kinematics::Velocity(float s1, float s2, float t1, float t2) {
    return (s2 - s1) / (t2 - t1);
}

float Kinematics::Acceleration(float s1, float s2, float t1, float t2) {
    return Kinematics::Velocity(s1, s2, t1, t2) / (t2 - t1);
}
