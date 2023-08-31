#include "EnemyScene.h"
#include"DxLib.h"
#include"GameMainScene.h"

int EnemyScene::enemyX;
int EnemyScene::enemyY;

EnemyScene::EnemyScene()
{

}

EnemyScene::~EnemyScene()
{

}

AbstractScene* EnemyScene::Update()
{
	return this;
}

void EnemyScene::Draw() const
{
	DrawFormatString(180, 10, 0xffffff, "エネミー");
}


