#pragma once
#include "GameObjects.h"
#include "Transform.h  "
#include "RigidBody.h  "
#include "Collider.h   "
#include "Sprite.h     "
#include "LifeTime.h   "
namespace bab
{
	 //Think of it as Components are derived from this game object
	class Components 
	{
		Transform transform;
		RigidBody rigidBody;
		Collider  collider;
		Sprite    sprite;
		LifeTime  lifeTime;
	public:
		Components();

		void      setTransform();
		Transform getTransform();

		void      setRigidBody();
		RigidBody getRigidBody();

		void      setCollider ();
		Collider  getCollider ();

		void      setSprite   ();
		Sprite    getSprite   ();

		void      setLifeTime ();
		LifeTime  getLifeTime ();
	
	};
}