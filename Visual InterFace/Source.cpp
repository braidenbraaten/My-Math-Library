#include "sfwdraw.h"
#include "Circle.h"
#include "vec2.h"
#include "Rectangle.h"
#include "Collision.h"
#include "Ray2D.h"

bab::Rectangle rectangle;
bab::Collision collision;
void DrawRectangle(const bab::Rectangle& rec)
{
	sfw::drawLine(rec.getMin().x, rec.getMax().y, rec.getMax().x, rec.getMax().y, CYAN);
	sfw::drawLine(rec.getMax().x, rec.getMax().y, rec.getMax().x, rec.getMin().y, CYAN);
	sfw::drawLine(rec.getMax().x, rec.getMin().y, rec.getMin().x, rec.getMin().y, CYAN);
	sfw::drawLine(rec.getMin().x, rec.getMin().y, rec.getMin().x, rec.getMax().y, CYAN);
}


const int Width = 800;
const int Height = 600;

static bool hasHappened = false;
static bool hasHappenedUp = false;
int main()
{
	rectangle.setMin(700, Height /2);
	rectangle.setMax(Width - 10, 10);
	bab::Circle circle;
	bab::Circle circle2;
	;
	
	bab::Vec2 vec;
	bab::Vec2 vec2;
	vec.x = Width / 2;
	vec.y = Height / 2;
	vec2.x = 2 * Width / 3;
	vec2.y = Height / 2;
	circle.setPos(vec);
	circle.setRadius(50);
	
	circle2.setRadius(50);
	


	sfw::initContext();

	
	while (sfw::stepContext())
	{
		//Drawing a ray from circle 1 to circle 2
		bab::Ray2D ray(vec2, vec, collision.dist(circle.getPos(), circle2.getPos()));
		sfw::drawLine(ray.getPos().x, ray.getPos().y, ray.getDirection().x, ray.getDirection().y, RED);

		 circle2.setPos(vec2);
		 circle.setPos(vec);
		 if (!hasHappened) { vec2.x += 5; vec.y += 5; }

		 sfw::drawCircle(circle.getPos().x, circle.getPos().y, circle.getRadius(), 30, CYAN);
		sfw::drawCircle(circle2.getPos().x, circle2.getPos().y, circle2.getRadius(), 30, CYAN);

		if (circle2.getPos().x + circle2.getRadius() >= 800)hasHappened = true;
		if (circle2.getPos().x - circle2.getRadius() <= 0  )hasHappened = false;
		
		if (hasHappened) { vec2.x -= 5; vec.y -= 5; }

	};

	sfw::termContext();
	
}