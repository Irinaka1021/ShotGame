#pragma once
#include"AbstractScene.h"
class SceneManager : public AbstractScene
{
private:
	AbstractScene* now_scene;					//���݂̃V�[��
public:
	SceneManager(AbstractScene* scene) : now_scene(scene) {};	//�R���X�g���N�^
	//�f�X�g���N�^
	~SceneManager() {
		delete now_scene;
	}

	AbstractScene* Update()override;			//�X�V����

	void Draw() const override;
};

