#pragma once
#include "GameSceneManager.h"
#include "Board.h"

class GameScene : public GameSceneManager::Scene
{
	Board board;
	uint32 wait;
public:
	GameScene();
	~GameScene();

	void update() override;
	void draw() const override;
};

