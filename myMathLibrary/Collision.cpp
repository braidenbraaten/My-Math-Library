#include "Collision.h"

namespace bab
{
	bool Collision::CheckCC(const Vec2& p1, float r1, const Vec2& p2, float r2)
	{
		bool collideing = false;
		Pos pos1, pos2;
		pos1.x = p1.x; pos2.x = p2.x;
		pos1.y = p1.y; pos2.y = p2.y;

		if ((r1 + r2) > (sqrtf((pos1.x - pos2.x) * (pos1.y - pos2.y) ) ) )
		{
			collideing = true;
		}

		return collideing;
	}

	bool Collision::CheckCC( Circle& a,  Circle& b)
	{
		bool collideing = false;
		if ((a.getRadius() + b.getRadius()) > (sqrtf((a.getPos().x - b.getPos().x) * (a.getPos().y - b.getPos().y)))) collideing = true;
		

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