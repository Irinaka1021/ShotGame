#pragma once
#include"AbstractScene.h"

class EnemyScene : public AbstractScene
{
public:
	static int enemyX, enemyY;
	EnemyScene();
	~EnemyScene();
	AbstractScene* Update();
	void Draw() const;
	int	g_WaitTime = 0;

};
