#include "Ellipse.h"
namespace MyShapes {
    void MyShapes::Ellipse::Show()
    {
        HANDLE hHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD cursorPos;

        // ������ �������� �� ����
        double a = length / 2.0;
        double b = width / 2.0;

        // ������ ����������� ����� �������
        int centerX = coordX - 1;
        int centerY = coordY - 1;

        // ������ ������
        for (int y = -length / 2; y <= width / 2; ++y)
        {
            for (int x = -length / 2; x <= length / 2; ++x)
            {
                double distance = std::pow(x / a, 2) + std::pow(y / b, 2);
                if (std::abs(distance - 1) < 0.08) // ���������� ������� �������� ��� ����� �������� �������
                {
                    cursorPos.X = centerX + x;
                    cursorPos.Y = centerY + y;
                    SetConsoleCursorPosition(hHandle, cursorPos);
                    std::cout << "*";
                }
                else if (distance < 1)
                {
                    cursorPos.X = centerX + x;
                    cursorPos.Y = centerY + y;
                    SetConsoleCursorPosition(hHandle, cursorPos);
                    std::cout << " ";
                }
            }
        }
    }
    void Ellipse::Save(FILE* f)
    {
        fwrite(this, sizeof(Ellipse), 1, f);

    }
    void Ellipse::Load(FILE* f)
    {
        fread(this, sizeof(Ellipse), 1, f);

    }
}
