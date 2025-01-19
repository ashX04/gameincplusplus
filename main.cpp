#include "raylib.h"

int main() {
  const int screenWidth = 800;
  const int screenHeight = 800;
  InitWindow(screenWidth, screenHeight, "Raylib Window");

  Vector2 circlePosition = {400, 300};
  float circleRadius = 50;
  float moveSpeed = 0.5f;
  while (!WindowShouldClose()) {
    if (IsKeyDown(KEY_RIGHT)) {
      circlePosition.x += moveSpeed; // Move right
    }
    if (IsKeyDown(KEY_LEFT)) {
      circlePosition.x -= moveSpeed; // Move left
    }
    if (IsKeyDown(KEY_UP)) {
      circlePosition.y -= moveSpeed; // Move up
    }
    if (IsKeyDown(KEY_DOWN)) {
      circlePosition.y += moveSpeed; // Move down
    }
    BeginDrawing();
    ClearBackground(RAYWHITE);

    DrawCircleV(circlePosition, circleRadius, BLUE);

    DrawText("Hello World", 10, 10, 20, DARKGRAY);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
