#pragma once
#include"AbstractScene.h"

class EndScene : public AbstractScene
{
private:
	int GameEndCount;				//�Q�[���̏I�������̃J�E���^�[
public:
	EndScene();
	~EndScene();
	AbstractScene* Update();
	void Draw() const;
	int	g_WaitTime = 0;

};


