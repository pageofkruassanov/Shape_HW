#include "Square.h"
namespace MyShapes {
	void Square::Show()
	{
		HANDLE hHandle = GetStdHandle(STD_OUTPUT_HANDLE);

		COORD cursorPos;
		cursorPos.X = coordX - 1;
		cursorPos.Y = coordY - 1;
		SetConsoleCursorPosition(hHandle, cursorPos);
		for (int i = 0; i < sideSize; i++) {
			for (int j = 0; j < sideSize; j++) {
				if (j == 0 || j == sideSize - 1)
					std::cout << "*";
				else if (i == 0 || i == sideSize - 1)
					std::cout << "*";
				else
					std::cout << " ";
			}
			cursorPos.Y = coordY + (i);
			SetConsoleCursorPosition(hHandle, cursorPos);
		}
	}
	void Square::Save(FILE* f)
	{
		fwrite(this, sizeof(Square), 1, f);
	}
	void Square::Load(FILE* f)
	{
		fread(this, sizeof(Square), 1, f);
	}
}
