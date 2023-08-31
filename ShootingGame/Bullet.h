#pragma once
#include"SphereCollider.h"
#include"DxLib.h"

class Bullet:public SphereCollider
{
private:
	int damage;
	float speed;
	float Angle;
	float Acceleration;
	float AngulVelocity;

public:
	Bullet(float _x,float _y);
	~Bullet();
	void Update();
	void Draw();
};

