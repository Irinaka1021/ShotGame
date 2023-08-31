#pragma once

struct Location
{
	float x;
	float y;
};

class SphereCollider
{
protected:
	Location location;
	float radius;

public:
	bool CheckColision();
	float GetLocationX();
	float GetLocationY();
};

