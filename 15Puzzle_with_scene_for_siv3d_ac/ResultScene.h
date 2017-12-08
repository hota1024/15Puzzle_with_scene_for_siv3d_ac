#pragma once
#include "GameSceneManager.h"
#include "MaterialPalette.h"
#include "BackgroundEffect.h"
#include <Siv3D.hpp>

class ResultScene : public GameSceneManager::Scene
{
	Font font{ 64 };
	Font count{ 48 };
	Font title{ 32 };
public:
	ResultScene();
	~ResultScene();

	void update() override;
	void draw() const override;
};

