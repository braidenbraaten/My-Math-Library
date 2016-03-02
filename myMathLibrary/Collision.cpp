#include "Collision.h"

namespace bab
{
	bool Collision::CheckCC(const Vec2& p1, float r1, const Vec2& p2, float r2)
	{
		bool collideing = false;

		return collideing;
	}

	bool Collision::CheckCC(const Circle& a, const Circle& b)
	{
		bool collideing = false;

		return collideing;
	}


	bool Collision::CheckCR(const Vec2&, float, const Vec2&, float, float)
	{
		bool collideing = false;

		return collideing;
	}

	bool Collision::CheckCR(const Circle&, const Rectangle&)
	{
		bool collideing = false;

		return collideing;
	}


	bool Collision::AABB(const Vec2&, float, float, const Vec2&, float, float)
	{
		bool collideing = false;

		return collideing;
	}
	bool Collision::AABB(const Rectangle&, const Rectangle&)
	{
		bool collideing = false;

		return collideing;
	}
}