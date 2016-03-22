#pragma once

#include "Collision.h"

namespace bab
{
	class Collider 
	{
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
		Collider(char input[9]);
		Collider(Vec2 pos, float radius);
		Collider(Vec2 min, Vec2 max);
		
		Vec2 getColPos();

		char getColType();
		
		//should update this gameObject's collider
		void Update();

	};

	
}