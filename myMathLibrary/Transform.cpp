#include "Transform.h"
namespace bab
{
	Transform::Transform()
	{
			
	}


	void Transform::setParent(Transform* newParent)
	{
		this->Parent = newParent;
	}

	void Transform::setPos(const Vec2& newPos)
	{
		this->pos = newPos;
	}

	void Transform::setScale(const Vec2& newScale)
	{
		this->scale = newScale;
	}

	void Transform::setAngle(float newAngle)
	{
		this->angle = newAngle;
	}

	Vec2 Transform::getPosition() const
	{
		return this->pos;
	}

	Vec2 Transform::getScale() const
	{
		return this->scale;
	}

	float Transform::getAngle() const
	{
		return this->angle;
	}


	
}