#pragma once
#include <Siv3D.hpp>
#include "Tile.h"

class Board
{
	enum class State {
		Shuffle,
		Game,
	};

	const static uint16 width = 4 + 2;
	const static uint16 height = 4 + 2;
	const static uint16 size = width * height;

	Tile tiles[size];

	State state;

	uint16 shuffleCount;
	uint16 moveCount;
public:
	Board();
	~Board();

	Board &init();
	Board &shuffle(uint32 count);

	void update();
	void draw();

	void keyInput();
	void mouseInput();

	Tile &findTile(uint32 number);
	Tile &getPointTile(Vec2 pos);
	Tile &emptyTile();

	uint16 getMoveCount() const;

	bool MoveTile(Vec2 pos);

	bool isCleard();


	static Vec2 GetDrawStartPos();
};

