#include "Component.h"

#include <cassert>

namespace bab
{
	Components::Components()
	{

	}

	void Components::setParentTransform(Transform &newT)
	{
		transform = newT;
	}

	Transform Components::getTransform()
	{
		return transform;
	}
	
	void Components::setRigidBody( RigidBody &newRB)
	{
		rigidBody = newRB;
	}

	RigidBody Components::getRigidBody()
	{
		return rigidBody;
	}

	void Components::setCollider( Collider &newC)
	{
		collider = newC;
	}

	Collider Components::getCollider()
	{
		return collider;
	}

	void Components::setSprite( Sprite &newS)
	{
		sprite = newS;
	}

	Sprite Components::getSprite()
	{
		assert(false && "IMPLEMENT ME");
		return Sprite();
	}

	void Components::setLifeTime( LifeTime &newL)
	{
		lifeTime = newL;
	}

	LifeTime Components::getLifeTime()
	{
		lifeTime.getAliveTime();

		assert(false && "IMPLEMENT ME");

		return LifeTime();
	}

	//where all of the component stuff will Update
	void Components::Update()
	{

		transform.Update();
		
		collider.Update();
	}

}