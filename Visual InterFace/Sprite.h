#pragma once
#include <string>
namespace bab
{
	class Sprite
	{
		//Name for the sprite

	public:
		Sprite();
		Sprite(std::string);
		Sprite(std::string, int, int);

		
		void setSpritePath(std::string);




		void Update();
			
	};

}