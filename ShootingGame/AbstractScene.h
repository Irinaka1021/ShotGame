#pragma once

class AbstractScene
{
public:
	virtual ~AbstractScene() {};					//デストラクタ
	virtual AbstractScene* Update() = 0;			//更新処理の実装
	virtual void Draw() const = 0;					//描画処理

};
