#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//f(n)=1-1/2+1/3-1/4+1/5...
void main()
{
	int i, n;
	double sum;
	double sign=1.0;
	sum = 0.0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += sign / i;
		sign = -sign;
	}
	printf("f(%d)=%f\n",n, sum);
}