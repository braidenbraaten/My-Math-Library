#pragma once
#include <list>
#include "Component.h"

namespace bab
{
	class GameObjects
	{
		Components objectComponents;
		std::list<GameObjects*> Objects;
	protected:
		GameObjects();

		void addObject();
		
		//Should update all game objects
		void UpdateObjects();
	};

	
}

//GameObjects gameObjects.