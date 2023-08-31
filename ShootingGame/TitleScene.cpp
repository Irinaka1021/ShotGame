#include "TitleScene.h"
#include <DxLib.h>
#include "KeyInput.h"
#include"GameMainScene.h"
#include"RankingScene.h"
#include"EndScene.h"

int TitleSecene;

int TitleScene::x = 10;
int TitleScene::y = 210;


// ƒRƒ“ƒXƒgƒ‰ƒNƒ^
TitleScene::TitleScene()
{
	SelectMode = 0;
}

//ƒfƒXƒgƒ‰ƒNƒ^
TitleScene::~TitleScene()
{

}

// XVˆ—
AbstractScene* TitleScene::Update()
{

	//printfDx("%d", KeyInput::Get_KeyFlg(PAD_INPUT_DOWN));
	///*if (GetJoypadInputState(DX_INPUT_KEY_PAD1)== PAD_INPUT_DOWN)*/
	if(KeyInput::g_KeyFlg & PAD_INPUT_DOWN)
	{
		y = y + 80;
	}
	if (y > 370) {
		y = 210;
	}

	if (KeyInput::g_KeyFlg & PAD_INPUT_UP)
	{
		y = y - 80;
	}
	if (y < 210) {
		y = 370;
	}

	if (y == 210 &&(GetJoypadInputState(DX_INPUT_KEY_PAD1) == PAD_INPUT_A))
	{
		return new GameMainScene();
	}
	
	if (y == 290 && (GetJoypadInputState(DX_INPUT_KEY_PAD1) == PAD_INPUT_A))
	{
		return new RankingScene();
	}

	if (y == 370 && (GetJoypadInputState(DX_INPUT_KEY_PAD1) == PAD_INPUT_A))
	{
		return new EndScene();
	}

	if (CheckHitKey(KEY_INPUT_RIGHT) == 1 && KeyInput::g_KeyFlg == FALSE)
	{

	}

	return this;
}


void TitleScene::Draw() const
{

	// •`‰æˆ—
	SetFontSize(110);
	DrawString(40, 40, "‚r‚g‚n‚n‚s", 0xFFFFFF);
	SetFontSize(DEFAULT_FONT_SIZE);

	SetFontSize(50);
	DrawString(60, 210, "‚r‚s‚`‚q‚s", 0xFFFFFF);

	SetFontSize(50);
	DrawString(60, 290, "‚q‚t‚m‚j‚h‚m‚f", 0xFFFFFF);

	SetFontSize(50);
	DrawString(60, 370, "‚d‚m‚c", 0xFFFFFF);

	DrawString(x, y, "Z", 0xffffff);

	DrawFormatString(400, 400, 0xffffff, "%d", y);

}
