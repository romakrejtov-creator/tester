#include "raylib.h"
class MyButton {
private:

public:

};


int main() {
	InitWindow(1000, 500, "lets go 2");
	SetTargetFPS(120);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);
		DrawText("hello world", 400, 200, 30, RAYWHITE);
		DrawFPS(10, 10);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}



