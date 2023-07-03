#pragma once
#include <iostream>
#include <Windows.h>

namespace MyShapes{
	class Shape
	{
	protected:
		int coordX;
		int coordY;
	public:
		Shape() = delete;
		Shape(int x, int y) : coordX{ x }, coordY{ y } {};
		virtual void Show() = 0;
		virtual void Save(FILE* f) = 0;
		virtual void Load(FILE* f) = 0;

	};
}

