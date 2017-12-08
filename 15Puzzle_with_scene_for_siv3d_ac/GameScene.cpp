#include "GameScene.h"



GameScene::GameScene()
{
	wait = 0;
}


GameScene::~GameScene()
{
}



void GameScene::update() { //–ó‚ ‚Á‚Ädraw‚à‚±‚±‚É“ü‚ê‚Ä‚¢‚Ü‚·(._.)
	board.update();
	board.draw();
	
	if (wait != 0) {
		wait++;
		if (wait >= 30) {
			m_data->board = board;
			changeScene(SceneCode::Result);
		}
	}else if (board.isCleard()) {
		m_data->moveCount = board.getMoveCount();
		wait = 1;
	}
}


void GameScene::draw() const {
}