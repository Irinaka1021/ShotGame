#pragma once

class BulletsSpawner
{
private:
	float speed;
	float Angle;
	float Acceleration;
	float AngulVelocity;
public:

	int	g_OldKey;				// �O��̓��̓L�[
	int	g_NowKey;				// ����̓��̓L�[
	int	g_KeyFlg;				// ���̓L�[���

	BulletsSpawner();
	~BulletsSpawner();
	void Update();
	void Draw();

	virtual void Shoot();
	int	g_WaitTime = 0;
};