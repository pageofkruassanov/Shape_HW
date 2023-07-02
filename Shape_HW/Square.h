#pragma once
#include "Shape.h"

namespace MyShapes {
	class Square : public Shape
	{
		int sideSize;
	public:
		Square(int x, int y, int sideSize) : Shape{ x, y }, sideSize{ sideSize } {};
		void Show() override;
	};
}

