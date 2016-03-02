#include "Rectangle.h"

namespace bab
{
	Rectangle::Rectangle()
	{
		Pos.Normalize();
		length = 1;
		width = 1;
	}

	Rectangle::Rectangle(float x, float y, float l, float w)
	{
		Pos.x = x;
		Pos.y = y;
		length = l;
		width = w;

	}

	Rectangle::Rectangle(const Vec2 &p, float l, float w)
	{
		Pos.x = p.x;
		Pos.y = p.y;
		length = l;
		width = w;
	}

	Vec2 Rectangle::getPos() { return Pos; }
	void Rectangle::setPos(float x, float y) { Pos.x = x; Pos.y = y; }
	void Rectangle::setPos(Vec2 vec) { Pos = vec; }


}