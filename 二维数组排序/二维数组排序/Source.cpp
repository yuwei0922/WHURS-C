#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int a[3][4] = { {62,338,93,19},
		{483,634,79,286},
		{69,364,71,5}
	};
	int b[12];
	int i, j;
	int k = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			b[k] = a[i][j];
			k++;
		}
	}
	int m, n;
	for (m = 0; m < 11; m++)
	{
		for (n = 0; n < 11 - m; n++)
		{
			if (b[n] > b[n + 1])
			{
				int q = b[n];
				b[n] = b[n + 1];
				b[n + 1] = q;
			}
		}
	}
	int c[3][4];
	int d = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
		    c[i][j]=b[d];
			printf("%d  ", c[i][j]);
			d++;
		}
		printf("\n");
	}
}