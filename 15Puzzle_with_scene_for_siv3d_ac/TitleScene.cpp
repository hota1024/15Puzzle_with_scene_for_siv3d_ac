#include "TitleScene.h"



TitleScene::TitleScene()
{
	effect.clear();
}


TitleScene::~TitleScene()
{
}


void TitleScene::init() {
}



void TitleScene::update() {
	effect.setSpeed(0.2);
	effect.add<BackgroundEffect>(efont);
	effect.update();
	if (Input::MouseL.clicked) changeScene(SceneCode::Game);
}


void TitleScene::draw() const {
	font(L"15 Puzzle").drawCenter({ Window::Center().x,100});
	start(L"Click to play").drawCenter({ Window::Center().x,300 });
}