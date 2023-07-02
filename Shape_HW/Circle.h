#pragma once
#include "Shape.h"
namespace MyShapes {
	class Circle : public Shape
	{
		int radius;
	public:
		Circle(int x, int y, int radius) : Shape{ x, y }, radius{ radius } {};
		void Show() override;
	};
}

