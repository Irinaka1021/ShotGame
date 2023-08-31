#pragma once
#include "AbstractScene.h"

class TitleScene : public AbstractScene
{
private:
	int g_MenuNumber;

public:

	int	g_OldKey;				// 前回の入力キー
	int	g_NowKey;				// 今回の入力キー
	int	g_KeyFlg;				// 入力キー情報

	int SelectMode;				//モード選択
	static int x, y;

	TitleScene();
	~TitleScene();
	AbstractScene* Update()override;
	void Draw() const override;
};

