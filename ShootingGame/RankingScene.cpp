#include "RankingScene.h"
#include"DxLib.h"

RankingScene::RankingScene()
{
	
}

RankingScene::~RankingScene()
{

}

AbstractScene* RankingScene::Update()
{
	return this;
}

void RankingScene::Draw() const
{
	DrawFormatString(180, 100, 0xffffff, "ƒ‰ƒ“ƒLƒ“ƒO");

}


