#include "Component.h"

namespace bab
{
	Components::Components()
	{

	}

	void Components::setTransform()
	{

	}

	Transform Components::getTransform()
	{
		
	}
	
	void Components::setRigidBody()
	{
		
	}

	RigidBody Components::getRigidBody()
	{
		
	}

	void Components::setCollider()
	{
		
	}

	Collider Components::getCollider()
	{
		
	}

	void Components::setSprite()
	{
		
	}

	Sprite Components::getSprite()
	{
		
	}

	void Components::setLifeTime()
	{
		
	}

	LifeTime Components::getLifeTime()
	{
		
	}

	//where all of the component stuff will Update
	void Components::Update()
	{


		collider.Update();
	}

}