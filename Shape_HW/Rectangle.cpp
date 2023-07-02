#include "Rectangle.h"

namespace MyShapes {
	void Rectangle::Show()
	{
		HANDLE hHandle = GetStdHandle(STD_OUTPUT_HANDLE);

		COORD cursorPos;
		cursorPos.X = coordX - 1;
		cursorPos.Y = coordY - 1;
		SetConsoleCursorPosition(hHandle, cursorPos);
		for (int i = 0; i < width; i++) {
			for (int j = 0; j < length; j++) {
				if (j == 0 || j == length - 1)
					std::cout << "*";
				else if (i == 0 || i == width - 1)
					std::cout << "*";
				else
					std::cout << " ";
			}
			cursorPos.Y = coordY + (i);
			SetConsoleCursorPosition(hHandle, cursorPos);
		}
	}
}
