#include"DxLib.h"
#include"SceneManager.h"

AbstractScene* SceneManager::Update()
{

	AbstractScene* NextScene;
	try
	{
		NextScene = now_scene->Update();
	}
	catch (const char* err)
	{
		FILE* fp = NULL;

		DATEDATA data;

		GetDateTime(&data);

		//�t�@�C���I�[�v��
		fopen_s(&fp, "ErrLog.txt", "a");
		//�G���[�f�[�^�̏�������
		fprintf_s(fp, "%02d�N�@%02���@%02�� %02���@%02���@%02�b : %s������܂���B\n", data.Year, data.Mon, data.Day, data.Hour, data.Min, data.Sec, err);

		return nullptr;
	}

	if (NextScene != now_scene)
	{
		delete now_scene;
		now_scene = NextScene;
	}

	return now_scene;
}

void SceneManager::Draw() const
{
	//���̃V�[���̕`��
	now_scene->Draw();
}
