#pragma once
#include"BulletsSpawner.h"
class NwaySpawner:public BulletsSpawner
{
private:
	int numBullets;
	float BaseAngle;
	float AngleDiff;
public:
		void Shoot() override;

};

