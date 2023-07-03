#include "Circle.h"
namespace MyShapes {
    void MyShapes::Circle::Show()
    {
        HANDLE hHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD cursorPos;
        cursorPos.X = coordX - 1 - radius;
        cursorPos.Y = coordY - 1 - radius;
        SetConsoleCursorPosition(hHandle, cursorPos);

        for (int y = -radius; y <= radius; ++y) {
            for (int x = -radius; x <= radius; ++x) {
                double distance = std::sqrt(std::pow(x, 2) + std::pow(y, 2));
                if (std::abs(distance - radius) < 0.5) {
                    cursorPos.X = coordX + x;
                    cursorPos.Y = coordY + y;
                    SetConsoleCursorPosition(hHandle, cursorPos);
                    std::cout << "*";
                }
            }
        }
    }
    void Circle::Save(FILE* f)
    {
        fwrite(this, sizeof(Circle), 1, f);
    }
    void Circle::Load(FILE* f)
    {
        fread(this, sizeof(Circle), 1, f);
    }
}
