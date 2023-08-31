#include "DxLib.h"
#include "SceneManager.h"
#include"define.h"
#include"GameMainScene.h"
#include"ClearScene.h"
#include"GameOverScene.h"
#include"TitleScene.h"
#include"KeyInput.h"

/***********************************************
 * プログラムの開始
 ***********************************************/
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	KeyInput::g_OldKey = KeyInput::g_NowKey;
	KeyInput::g_NowKey = GetJoypadInputState(DX_INPUT_PAD1);
	KeyInput::g_KeyFlg = KeyInput::g_NowKey & ~KeyInput::g_OldKey;

	// タイトル設定
	SetMainWindowText("ブロック崩し");

	// ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//画面サイズの設定
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLOR_BIT);

	// DXライブラリの初期化処理
	if (DxLib_Init() == -1) return 0;

	// 描画先画面を裏にする（ダブルバッファリング）
	SetDrawScreen(DX_SCREEN_BACK);

	SceneManager* Scene;

	try
	{
		Scene = new SceneManager((AbstractScene*) new TitleScene());
	}
	catch (int err)
	{
		return err;
	}

	// ゲームループ
	while (ProcessMessage() != -1 && (Scene->Update() != nullptr))
	{
		KeyInput::Key();
		// 画面の初期化
		ClearDrawScreen();

		Scene->Update();
		Scene->Draw();


		// 　裏画面ｎ内容を表画面に反映する
		ScreenFlip();

	}
	// DXライブラリ使用の終了処理
	DxLib_End();

	// プログラムの終了
	return 0;

}

