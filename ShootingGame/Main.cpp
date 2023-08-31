#include "DxLib.h"
#include "SceneManager.h"
#include"define.h"
#include"GameMainScene.h"
#include"ClearScene.h"
#include"GameOverScene.h"
#include"TitleScene.h"
#include"KeyInput.h"

/***********************************************
 * �v���O�����̊J�n
 ***********************************************/
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	KeyInput::g_OldKey = KeyInput::g_NowKey;
	KeyInput::g_NowKey = GetJoypadInputState(DX_INPUT_PAD1);
	KeyInput::g_KeyFlg = KeyInput::g_NowKey & ~KeyInput::g_OldKey;

	// �^�C�g���ݒ�
	SetMainWindowText("�u���b�N����");

	// �E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//��ʃT�C�Y�̐ݒ�
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLOR_BIT);

	// DX���C�u�����̏���������
	if (DxLib_Init() == -1) return 0;

	// �`����ʂ𗠂ɂ���i�_�u���o�b�t�@�����O�j
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

	// �Q�[�����[�v
	while (ProcessMessage() != -1 && (Scene->Update() != nullptr))
	{
		KeyInput::Key();
		// ��ʂ̏�����
		ClearDrawScreen();

		Scene->Update();
		Scene->Draw();


		// �@����ʂ����e��\��ʂɔ��f����
		ScreenFlip();

	}
	// DX���C�u�����g�p�̏I������
	DxLib_End();

	// �v���O�����̏I��
	return 0;

}

