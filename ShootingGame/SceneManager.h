#pragma once
#include"AbstractScene.h"
class SceneManager : public AbstractScene
{
private:
	AbstractScene* now_scene;					//現在のシーン
public:
	SceneManager(AbstractScene* scene) : now_scene(scene) {};	//コンストラクタ
	//デストラクタ
	~SceneManager() {
		delete now_scene;
	}

	AbstractScene* Update()override;			//更新処理

	void Draw() const override;
};

