#pragma once
#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Board.h"

enum class SceneCode {
	Title,
	Game,
	Result
};

struct SceneData {
	int moveCount = 0;
	Board board;
};

using GameSceneManager = SceneManager<SceneCode, SceneData>;