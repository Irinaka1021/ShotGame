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

		//ファイルオープン
		fopen_s(&fp, "ErrLog.txt", "a");
		//エラーデータの書き込み
		fprintf_s(fp, "%02d年　%02月　%02日 %02時　%02分　%02秒 : %sがありません。\n", data.Year, data.Mon, data.Day, data.Hour, data.Min, data.Sec, err);

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
	//今のシーンの描画
	now_scene->Draw();
}
