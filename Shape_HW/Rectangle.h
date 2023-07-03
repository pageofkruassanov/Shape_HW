#pragma once
#include "Shape.h"

namespace MyShapes {
	class Rectangle : public Shape
	{
		int length;
		int width;
	public:
		Rectangle(int x, int y, int length, int width) : Shape{ x, y }, length{ length }, width{ width } {};
		void Show() override;
		void Save(FILE* f) override;
		void Load(FILE* f) override;
	};
}

