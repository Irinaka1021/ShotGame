#pragma once
#include"DxLib.h"
class KeyInput
{
public:
	static int	g_OldKey;				// 前回の入力キー
	static int	g_NowKey;				// 今回の入力キー
	static int	g_KeyFlg;				// 入力キー情報

	static void Key();
	static int Get_KeyFlg(const int key);	//入力キー情報の取得
};

