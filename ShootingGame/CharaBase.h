#pragma once
#include"SphereCollider.h"
class CharaBase:public SphereCollider
{
private:
	float Speed;
	int Image;
	SphereCollider* Update();
	SphereCollider* Draw();
	SphereCollider* Hit();
};

