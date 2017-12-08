#include "ResultScene.h"



ResultScene::ResultScene()
{
}


ResultScene::~ResultScene()
{
}


void ResultScene::update() {
	if (Input::MouseL.clicked) changeScene(SceneCode::Title);
}


void ResultScene::draw() const {
	m_data->board.draw();
	Window::ClientRect().draw(Color(0,0,0,128));
	font(L"Result").drawCenter({Window::Center().x,100});
	count(m_data->moveCount).drawCenter({Window::Center().x,200});
	title(L"Click to title").drawCenter({ Window::Center().x,300 });
}