#include "sfwdraw.h"
#include "Circle.h"
#include "vec2.h"
#include "Rectangle.h"
#include "Collision.h"
#include "Ray2D.h"
#include "GameObjects.h"
#include <vector>
#include <cassert>
#include "Sprite.h"

bab::Rectangle rectangle;
bab::Collision collision;
void DrawRectangle(const bab::Rectangle& rec)
{
	sfw::drawLine(rec.getMin().x, rec.getMax().y, rec.getMax().x, rec.getMax().y, CYAN);
	sfw::drawLine(rec.getMax().x, rec.getMax().y, rec.getMax().x, rec.getMin().y, CYAN);
	sfw::drawLine(rec.getMax().x, rec.getMin().y, rec.getMin().x, rec.getMin().y, CYAN);
	sfw::drawLine(rec.getMin().x, rec.getMin().y, rec.getMin().x, rec.getMax().y, CYAN);
}



bab::GameObjects Player;





const int Width = 800;
const int Height = 600;

static bool hasHappened = false;
static bool hasHappenedUp = false;
int main()
{

	

	sfw::initContext();

	
	while (sfw::stepContext())
	{
		

	};

	sfw::termContext();
	
}