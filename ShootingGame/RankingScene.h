#pragma once
#include"AbstractScene.h"

class RankingScene : public AbstractScene
{
public:
	RankingScene();
	~RankingScene();
	AbstractScene* Update();
	void Draw() const;
	int	g_WaitTime = 0;

};


