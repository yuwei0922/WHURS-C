#include <stdio.h>
#include <cmath>
int main()
{
	float a, b, c;
	a = 1;
	b = -5;
	c = -6;
	float s = (b * b - 4 * a * c);
	float x = (-b + sqrt(s)) / (2 * a);
	float y = (-b - sqrt(s)) / (2 * a);
	printf("x=%f\ny=%f\n", x, y);
	return 0;
}