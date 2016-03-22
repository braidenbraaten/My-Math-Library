#include "GameStates.h"

namespace bab
{
	void GameState::addObject()
	{
		GO_Ptrs.push_back(new GameObjects);
	}

	void GameState::ClearObjects()
	{
		GO_Ptrs.clear();
	}

	void GameState::Update()
	{
		//if the game exits, then clear all objects held in the vector
		if (gameState == EXIT) GameState::ClearObjects();

		//the main loop for the engine
		while (gameState != EXIT)
		{

			switch (gameState)
			{
			case PAUSE:

				break;
			default:
			case PLAY:
				//Update all of the things here
				for (std::vector<GameObjects*>::iterator it = GO_Ptrs.begin(); it != GO_Ptrs.end(); it++)
				{
					//updates all of the objects in the game
					GO_Ptrs.front()->UpdateObject();
				}
					
				break;


			}
		}
	}


	

}