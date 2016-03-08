#include "Collision.h"

namespace bab
{
	typedef Vec2 Vec2;
	template <typename T>
	T Collision::clamp(T value, T min,T max)
	{
		if (value < min) value = min;
		if (value > max) value = max;
		return value;
	}

	bool Collision::CheckCC(const Vec2& p1, float r1, const Vec2& p2, float r2)
	{
		Pos pos1, pos2;
		pos1.x = p1.x; pos2.x = p2.x;
		pos1.y = p1.y; pos2.y = p2.y;

		return ((r1 + r2) > (sqrtf((pos1.x - pos2.x) * (pos1.y - pos2.y))));
	}

	bool Collision::CheckCC( Circle& a,  Circle& b) {return ((a.getRadius() + b.getRadius()) > (sqrtf((a.getPos().x - b.getPos().x) * (a.getPos().y - b.getPos().y))));}


	bool Collision::CheckCR(const Vec2& p1, float r1, Vec2 min, Vec2 max)
	{
		Vec2 pc = clamp<Vec2>(p1, min, max);
		 return dot(p1, pc) <= (r1 * r1);
	}

	bool Collision::CheckCR(Circle& c, Rectangle& r) {return CheckCR(c.getPos(), c.getRadius(), Vec2{ r.getMin().x, r.getMin().y }, Vec2{ r.getMax().x, r.getMax().y });}


	bool Collision::AABB(const Vec2&, float, float, const Vec2&, float, float)
	{
		bool colliding = false;

		return colliding;
	}
	bool Collision::AABB(const Rectangle&, const Rectangle&)
	{
		bool colliding = false;

		return colliding;
	}
}