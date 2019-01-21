
#include <iostream>
#include <math.h>

bool collisionCheck(float s0x1, float s0y1, float s0x2, float s0y2, float ballRad)
{
	if (sqrt((s0x2 - s0x1)*(s0x2 - s0x1) + (s0y2 - s0y1)*(s0y2 - s0y1)) <= ballRad*2)
		return true;
	else
		return false;
}
