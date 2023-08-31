#include "GameMainScene.h"
#include"DxLib.h"


GameMainScene::GameMainScene()
{
	player = new PlayerScene;
	enemy = new EnemyScene;
}

GameMainScene::~GameMainScene()
{

}

AbstractScene* GameMainScene::Update()
{
	player->Update();
	
	if (bullet != nullptr) {
		bullet->Update();
	}
	enemy->Update();
	return this;
}

void GameMainScene::Draw() const
{
	player->Draw();
	enemy->Draw();
	if (bullet != nullptr) {
		bullet->Draw();
	}

	DrawFormatString(180, 100, 0xffffff, "ƒƒCƒ“‰æ–Ê");
}


