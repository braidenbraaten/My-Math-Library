#include "GameObjects.h"

namespace bab
{
	GameObjects::GameObjects()
	{
		//Adds this object to the object list
		GO_Ptrs.push_back(thisObject);
		
	}
	//update the object's components here
	
	void GameObjects::UpdateObject()
	{
		//trying to iterate through the vector until it finds this object and only updates this object
		for (std::vector<GameObjects*>::iterator it = GO_Ptrs.begin(); *it != this->thisObject; it++)
		{
			if (*it == this->thisObject)
			{   //finished
				if(this->ActiveComponents[0] == true) GO_Ptrs.front()->objectComponents.getTransform().Update();
				if(this->ActiveComponents[2] == true) GO_Ptrs.front()->objectComponents.getCollider().Update();
				//unfinished
				if (this->ActiveComponents[3] == true) GO_Ptrs.front()->objectComponents.getSprite();
				if(this->ActiveComponents[4] == true) GO_Ptrs.front()->objectComponents.getLifeTime().Update();
				if(this->ActiveComponents[1] == true) GO_Ptrs.front()->objectComponents.getRigidBody();
			}
		}
	}





}