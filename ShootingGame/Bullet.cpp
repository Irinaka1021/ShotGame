#include "Bullet.h"


Bullet::Bullet(float _x, float _y)
{
	location.y = _y;
	location.x = _x;
}

Bullet::~Bullet()
{

}

void Bullet::Update()
{

	location.y = location.y - 1;
	printfDx("%f\n", location.y);
}

void Bullet::Draw()
{
	DrawCircle((int)location.x, (int)location.y, (int)radius,0xff0000,true);
}
