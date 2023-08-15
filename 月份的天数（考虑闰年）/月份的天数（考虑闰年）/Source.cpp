#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void main()
{
	int y, m;
	scanf("%d %d", &y, &m);
	int a;
	a = ((y % 4) || (y % 100 == 0 && y % 400 != 0)) ? 28 : 29;
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d年%d月有31天", y, m);
		break;
	case 2:
		printf("%d年%d月有%d天", y, m, a);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d年%d月有30天", y, m);
		break;
	default:printf("error");
		break;
	}
}