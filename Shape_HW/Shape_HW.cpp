#include <iostream>
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Ellipse.h"
using namespace MyShapes;
int main()
{
    FILE* f;
    fopen_s(&f, "Square.bin", "rb");
    Square sr(1, 1, 1);
    sr.Load(f);
    sr.Show();
    fclose(f);
    
    fopen_s(&f, "Rectangle.bin", "rb");
    MyShapes::Rectangle rc(1, 1, 1, 1);
    rc.Load(f);
    rc.Show();
    fclose(f);

    fopen_s(&f, "Circle.bin", "rb");
    Circle cr(1, 1, 1);
    cr.Load(f);
    cr.Show();
    fclose(f);

    fopen_s(&f, "Ellipse.bin", "rb");
    MyShapes::Ellipse ell(1, 1, 1, 1);
    ell.Load(f);
    ell.Show();
    fclose(f);
    system("pause > nul");
    system("cls");
}
