
#include <iostream>
#include <math.h>

float findAngle(float sx1, float sy1, float sx2, float sy2){ //this program takes 2 sets of coordinates
	float y = sy2 - sy1; //delta y
	float x = sx2 - sx1; //delta x
	float angle = 0;
	if (x == 0) { //if x = 0, atan doesn't work normally as denominator = 0. Hence, we must use special cases.
		if (y > 0)
			angle = atan(1) * 2;
		else if (y < 0)
			angle = atan(1) * 6;
	}
	else { //considers all cases so as to avoid confusion with the atan function (e.g. if both x and y are negative)
		if (x < 0 && y >= 0 || x < 0 && y < 0)
			angle = atan(y / x) + atan(1) * 4;
		else if (x > 0 && y < 0)
			angle = atan(y / x) + atan(1) * 8;
		else if (x > 0 && y > 0)
			angle = atan(y / x);
	}
	return angle;
}
