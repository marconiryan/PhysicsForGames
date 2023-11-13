#include <string>
#include "raylib.h"
#include "physics.hpp"

int main() {
    InitWindow(800, 450, "Physics for Game Developers");
    int posX = 0, acceleration;
    SetTargetFPS(120);
    while (!WindowShouldClose()) {

        acceleration = static_cast<int> (Kinematics::Acceleration(0, 800, 0, 10));

        posX += acceleration;
        if (posX > 800) {
            posX = 0;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangle(posX, 100, 100, 100, RED);
        DrawText(std::to_string(acceleration).c_str(), 10, 10, 30, RED);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}