#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, j;
	int a[5] = { 65,87,84,37,96 };
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int k;
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
		printf("%d\n", a[j]);
	}
	printf("%d\n", a[0]);
}