#pragma once
#include <Siv3D.hpp>
#include "MaterialPalette.h"

struct BackgroundEffect : IEffect
{
	double x;
	const Font font;
	Color color;
	BackgroundEffect(const Font &font);

	bool update(double t);
};

