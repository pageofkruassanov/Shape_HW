#include <iostream>
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace MyShapes;
int main()
{
    Square sq(5, 7, 10);
    sq.Show();
    MyShapes::Rectangle rc(20, 20, 17, 6);
    rc.Show();
    Circle cr(40, 5, 5);
    cr.Show();
    // Вызов функции system("pause > nul") скрывает надпись в консоли
    system("pause > nul");
    system("cls");
}
