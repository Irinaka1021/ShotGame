#include "EndScene.h"
#include "define.h"
#include"DxLib.h"

EndScene::EndScene()
{
	GameEndCount = 0;
}

EndScene::~EndScene()
{

}

AbstractScene* EndScene::Update()
{
	GameEndCount++;
	if (GameEndCount > FPS * 3) {
		return nullptr;
	}
	return this;
}

void EndScene::Draw() const
{
	SetFontSize(110);
	DrawFormatString(200, 100, 0xffffff, "‚f‚`‚l‚d@‚d‚m‚c");
	SetFontSize(DEFAULT_FONT_SIZE);
}

