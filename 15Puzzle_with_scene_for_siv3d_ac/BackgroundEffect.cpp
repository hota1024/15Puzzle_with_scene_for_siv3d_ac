#include "BackgroundEffect.h"



BackgroundEffect::BackgroundEffect(const Font &font) : font(font) {
	x = Random(0,64) * 10;
	color = RandomSelect(MaterialPalette::List)[2];
}


bool BackgroundEffect::update(double t) {
	font(Random(1,15)).draw({x,t * 480},color);
	return t < 1.0;
}


