#include "PlayerScene.h"
#include"DxLib.h"
#include"GameMainScene.h"
#include"KeyInput.h"
#include"BulletsSpawner.h"

int PlaerScene;

PlayerScene::PlayerScene()
{
	g_OldKey = g_NowKey;
	g_NowKey = GetJoypadInputState(DX_INPUT_KEY);
	g_KeyFlg = g_NowKey & ~g_OldKey;
}

PlayerScene::~PlayerScene()
{

}

void PlayerScene::Update()
{
	if (GetJoypadInputState(DX_INPUT_KEY_PAD1) == PAD_INPUT_LEFT)
	{
		location.x = location.x - 5;
	}
	if (location.x < 5) {
		location.x = 0;
	}

	if (GetJoypadInputState(DX_INPUT_KEY_PAD1) == PAD_INPUT_RIGHT)
	{
		location.x = location.x + 5;
	}

	if (location.x > 1230) {
		location.x = 1230;
	}

	/*if (GetJoypadInputState(DX_INPUT_KEY_PAD1) == PAD_INPUT_B)
	{

	}*/

}


void PlayerScene::Draw()
{
	DrawFormatString(location.x, 630, 0xffffff, "Å£");
	DrawFormatString(400, 400, 0xffffff, "%d", location.x);
}

