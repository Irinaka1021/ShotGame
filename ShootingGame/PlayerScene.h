#pragma once
#include"CharaBase.h"

class PlayerScene:public CharaBase
{
public:

	int	g_OldKey;				// �O��̓��̓L�[
	int	g_NowKey;				// ����̓��̓L�[
	int	g_KeyFlg;				// ���̓L�[���

	PlayerScene();
	~PlayerScene();
	void Update();
	void Draw() ;
	int	g_WaitTime = 0;
};

