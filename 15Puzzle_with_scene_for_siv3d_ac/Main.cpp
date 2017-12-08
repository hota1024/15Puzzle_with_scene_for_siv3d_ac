#include <Siv3D.hpp>
#include "GameSceneManager.h"
#include "TitleScene.h"
#include "GameScene.h"
#include "ResultScene.h"

void Main() {

	if (!FontManager::Register(L"Roboto-Regular.ttf")) return;

	GameSceneManager manager;

	manager.add<TitleScene>(SceneCode::Title);
	manager.add<GameScene>(SceneCode::Game);
	manager.add<ResultScene>(SceneCode::Result);

	while (System::Update())
	{
		ClearPrint();
		manager.updateAndDraw();
	}
}
