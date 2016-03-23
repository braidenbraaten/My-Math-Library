#include "Sprite.h"
#include "sfwdraw.h"

namespace bab
{
	Sprite::Sprite()
	{


		//should add a default texture that says no texture on it, so you know you have to change it
	}


	//good for init normal sprites
	Sprite::Sprite(std::string file_path)
	{
		sfw::loadTextureMap(file_path.c_str());
		
	}

	//good for init  sprite grids
	Sprite::Sprite(std::string file_path, int row, int col)
	{
		sfw::loadTextureMap(file_path.c_str(), row, col);

	}


	void Sprite::setSpritePath(std::string newFile_path)
	{
		sfw::loadTextureMap(newFile_path.c_str());
	}


	//should update this individual sprite
	void Sprite::Update()
	{
		
	}
}

														/*   UNWANTED CODE    */


/*void Sprite::setSpriteName(std::string new_name)
{
SpriteName = new_name;
}

std::string Sprite::getSpriteName()
{
return SpriteName;
}*/