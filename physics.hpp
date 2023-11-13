#ifndef GAME_PHYSICS_HPP
#define GAME_PHYSICS_HPP

class Kinematics {
public:
    static float Velocity(float s1, float s2, float t1, float t2);

    static float Acceleration(float s1, float s2, float t1, float t2);
};


#endif
