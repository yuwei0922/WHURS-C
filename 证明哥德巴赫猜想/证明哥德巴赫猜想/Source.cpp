#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Goldbach(int y)
{
	int x;
	for (x = 2; x < y; x++)
	{
		if(y%x==0)
		break;
	}
	if(x>=y)
		return 1;
}

void main()
{
	int x, y;
	printf("请输入一个大于二的偶数\n");
	scanf_s("%d", &y);
	for (x = 3; x < y; x++)
	{
		if (Goldbach(x) == 1 && x%2==1 && Goldbach(y-x)==1 && (y-x)%2==1)
			printf("%d=%d+%d\n", y, x, y - x);
	}
}