#pragma once
#include "Circle.h"
#include "Rectangle.h"
#include "vec2.h"
namespace bab
{
	class Collision
	{
		//   Check Circle Circle Collision
		bool CheckCC(const Vec2&, float, const Vec2&, float);
		bool CheckCC(const Circle&, const Circle&);
		
		//   Check Circle Rectangle Collision
		bool CheckCR(const Vec2&, float, const Vec2&, float, float);
		bool CheckCR(const Circle&, const Rectangle&);
		
		//   Check Rectangle Rectangle Collision
		bool AABB(const Vec2&, float, float, const Vec2&, float, float);
		bool AABB(const Rectangle&, const Rectangle&);
	};
}