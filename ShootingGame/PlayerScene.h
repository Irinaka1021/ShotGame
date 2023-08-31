#pragma once
#include"CharaBase.h"

class PlayerScene:public CharaBase
{
public:

	int	g_OldKey;				// 前回の入力キー
	int	g_NowKey;				// 今回の入力キー
	int	g_KeyFlg;				// 入力キー情報

	PlayerScene();
	~PlayerScene();
	void Update();
	void Draw() ;
	int	g_WaitTime = 0;
};

