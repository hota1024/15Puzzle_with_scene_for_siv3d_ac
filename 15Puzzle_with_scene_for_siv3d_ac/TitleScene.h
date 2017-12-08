#pragma once
#include "GameSceneManager.h"
#include "MaterialPalette.h"
#include "BackgroundEffect.h"
#include <Siv3D.hpp>

class TitleScene : public GameSceneManager::Scene
{
	Effect effect;
	Font font{ 64 };
	Font efont{ 16 };
	Font start{ 32 };
public:
	TitleScene();
	~TitleScene();

	void init() override;
	void update() override;
	void draw() const override;
};

