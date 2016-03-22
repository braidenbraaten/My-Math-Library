#pragma once
#include "Component.h"
#include <vector>



namespace bab
{
	

	class GameObjects
	{


		//if the components are active within the object, used to save update time / use
		// [0] Transform    [1] Rigidbody   [2] Collider  [3] Sprite  [4] Lifetime
		bool ActiveComponents[5] = {false};
		bool ActiveObject = true;
		Components objectComponents;
		//std::list<GameObjects*> Objects;

		//A pointer to this object so other objects can see where it is
	public:
		GameObjects *thisObject;
		GameObjects();
		
		//Should update all game object's components
		void UpdateObject();
	};

	// list of ptrs pointing at your gameObjects
	std::vector<GameObjects *> GO_Ptrs;

	 
}

//GameObjects gameObjects.