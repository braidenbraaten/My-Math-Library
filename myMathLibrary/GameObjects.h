#pragma once
#include "Component.h"
#include <vector>



namespace bab
{
	std::vector<GameObjects*> GO_Ptrs;

	class GameObjects
	{


		//if the components are active within the object, used to save update time / use
		bool ActiveComponents[5] = {false};

		Components objectComponents;
		//std::list<GameObjects*> Objects;

		//A pointer to this object so other objects can see where it is
	public:
		GameObjects *thisObject = this;
		GameObjects();
		
		//Should update all game object's components
		void UpdateObject();
	};

	
}

//GameObjects gameObjects.