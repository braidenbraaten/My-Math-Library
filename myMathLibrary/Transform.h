#pragma once
#include "vec2.h"
#include "mat3.h"
#include <list>
namespace bab
{
	class Transform
	{
		Transform *Parent;
		std::list<Transform*> Children;
		Vec2 pos, scale;
		float angle;
	public:
		Transform();
		~Transform();
		mat3 getGlobalTransform() const;

		void setParent(Transform*);
		void setPos   (const Vec2&);
		void setScale (const Vec2&);
		void setAngle (float);

		Vec2 getPosition()    const;
		Vec2 getScale   ()    const;
		float getAngle  ()    const;

		Vec2 getRight()					  const;
		Vec2 getUp()					  const;




	};


}