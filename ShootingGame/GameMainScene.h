#pragma once
#include"AbstractScene.h"
#include"PlayerScene.h"
#include"EnemyScene.h"
#include"Bullet.h"

class GameMainScene : public AbstractScene
{
private:
	PlayerScene* player;
	EnemyScene* enemy;
	Bullet* bullet;

public:
	GameMainScene();
	~GameMainScene();
	AbstractScene* Update();
	void Draw() const;
	int	g_WaitTime = 0;
};

