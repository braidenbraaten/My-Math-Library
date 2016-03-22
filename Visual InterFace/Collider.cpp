#include "Collider.h"
#include "Rectangle.h"
#include "vec2.h"

namespace bab
{
	Collider::Collider()
	{
		
	}

	Collider::Collider(char input[9])
	{
		if (input == "circle" || input == "Circle" || input == "c" || input == "cir") shape = CIRCLE; 
		if (input == "rectangle" || input == "Rectangle" || input == "r" || input == "rec") shape = RECT;
	}

	Collider::Collider(Vec2 pos, float radius)
	{
		shape = CIRCLE;
		circle.setPos(pos);
		circle.setRadius(radius);
	}

	Collider::Collider(Vec2 min, Vec2 max)
	{
		shape = RECT;
		rectangle.setMin(min);
		rectangle.setMax(max);
	}

	Vec2 Collider::getColPos()
	{
		switch (shape)
		{
		case CIRCLE:
			return circle.getPos();
			break;

		case RECT:
			return rectangle.getPos();
			break;
		}
	}

	char Collider::getColType()
	{
		return colType[10];
	}

	void Collider::Update()
	{
		
	}


}