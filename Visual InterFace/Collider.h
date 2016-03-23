#pragma once

#include "Collision.h"
#include <string>
#include "sfwdraw.h"
namespace bab
{
	class Collider 
	{
		bool isVisible = false;

		enum COLL_SHAPE {EMPTY, CIRCLE, RECT };
		Collision collision;
		COLL_SHAPE shape = EMPTY;
		Circle circle;
		Rectangle rectangle;
		char colType[10] = {};
		Vec2 pos, min, max;
		float radius;
		bool Active = true;

	public:
		Collider();
		//input for type of collider
		Collider(char input[9]);
		//input for circle
		Collider(Vec2 pos, float radius);

		//input for a square
		Collider(Vec2 min, Vec2 max);
		
		void isShapeVisible(bool);

		Vec2 getColPos();

		char getColType();
		
		//should update this gameObject's collider
		void Update();

	};

	
}