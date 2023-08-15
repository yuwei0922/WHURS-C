#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//法一
/*
int main()
{
	int x;
	scanf("%d", &x);

	int t = 0;
	do {
		int d = x % 10;
		t = t * 10 + d;
		x /= 10;
	} while (x > 0);//do-while逆序排序
	printf("x=%d,t=%d\n", x, t);
	x = t;
	do {
		int d = x % 10;
		printf("%d", d);
		if (x > 9) {
			printf(" ");
		}
		x /= 10;
	} while (x > 0);
	printf("\n");
	return 0;
}*/ //不能输出0007类型

//法二
int main()
{
	int x;
	scanf("%d", &x);
	int t = x;
	int m = x;
	int mask = 1,i = 1;
	while (t > 9)
	{
		t /= 10;
		mask *= 10;
		i++;
	} //计算位数，并得到相应位数mask
	printf("%d是%d位数\n",x, i);
	do {
		int d = x / mask;
		printf("%d", d);
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);
	printf("\n");
	int n = 0;
	do {
		int k = m % 10;
		n = n * 10 + k;
		m /= 10;
	}while(m > 0);
	printf("%d", n);
}