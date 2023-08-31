#pragma once

class BulletsSpawner
{
private:
	float speed;
	float Angle;
	float Acceleration;
	float AngulVelocity;
public:

	int	g_OldKey;				// 前回の入力キー
	int	g_NowKey;				// 今回の入力キー
	int	g_KeyFlg;				// 入力キー情報

	BulletsSpawner();
	~BulletsSpawner();
	void Update();
	void Draw();

	virtual void Shoot();
	int	g_WaitTime = 0;
};