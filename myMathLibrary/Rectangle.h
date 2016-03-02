#pragma once
#include "vec2.h"
namespace bab
{

	//Pos is based in the center of the object not the top left corner
	class Rectangle
	{
		Vec2 Pos;
		float length, width;
	public:
		Rectangle();
		Rectangle(float , float , float, float);
		Rectangle(const Vec2&, float, float);

		Vec2 getPos();
		void setPos(float, float);
		void setPos(Vec2);

	};
}