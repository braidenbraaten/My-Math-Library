#pragma once
#include "vec2.h"
namespace bab
{

	//Pos is based in the center of the object not the top left 
	class Rectangle
	{
		Vec2 Pos;
		Vec2 Min, Max;
		float length, width;
	public:
		Rectangle();
		Rectangle(float , float , float, float);
		Rectangle(const Vec2&, float, float);
		Rectangle(Vec2 min, Vec2 max);

		Vec2 getPos();
		void setPos(float, float);
		void setPos(Vec2);
		void setMin(float, float);
		void setMax(float, float);
		Vec2 getMin() const;
		Vec2 getMax() const;

	};
}