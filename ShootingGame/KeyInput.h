#pragma once
#include"DxLib.h"
class KeyInput
{
public:
	static int	g_OldKey;				// �O��̓��̓L�[
	static int	g_NowKey;				// ����̓��̓L�[
	static int	g_KeyFlg;				// ���̓L�[���

	static void Key();
	static int Get_KeyFlg(const int key);	//���̓L�[���̎擾
};

