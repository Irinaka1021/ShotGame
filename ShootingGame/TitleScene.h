#pragma once
#include "AbstractScene.h"

class TitleScene : public AbstractScene
{
private:
	int g_MenuNumber;

public:

	int	g_OldKey;				// �O��̓��̓L�[
	int	g_NowKey;				// ����̓��̓L�[
	int	g_KeyFlg;				// ���̓L�[���

	int SelectMode;				//���[�h�I��
	static int x, y;

	TitleScene();
	~TitleScene();
	AbstractScene* Update()override;
	void Draw() const override;
};

