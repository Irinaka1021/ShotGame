#pragma once
#include"AbstractScene.h"

class EndScene : public AbstractScene
{
private:
	int GameEndCount;				//ゲームの終了処理のカウンター
public:
	EndScene();
	~EndScene();
	AbstractScene* Update();
	void Draw() const;
	int	g_WaitTime = 0;

};


