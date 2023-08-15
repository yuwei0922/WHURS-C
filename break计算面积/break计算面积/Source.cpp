#include<stdio.h>
#include<stdlib.h>
#define pi 3.1415
void main()
{
	int r;
	float area;
	for (r = 1; r <= 10; r++)
	{
		area = pi * r * r;
		if (area > 100)break;
		printf("%f\n", area);
	}
}
