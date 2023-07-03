#pragma once
#include "Shape.h"
namespace MyShapes {
	class Ellipse : public Shape
	{
		int length;
		int width;
	public:
		Ellipse(int x, int y, int length, int width) : Shape{ x, y }, length{ length }, width{ width } {};
		void Show() override;
		void Save(FILE* f) override;
		void Load(FILE* f) override;
	};
}

