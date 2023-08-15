#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Add()
{
	/*char strMsg[256];
		printf("Please input your name: ");
		scanf_s("%s", strMsg);
		printf("The input message is %s\n", strMsg);*/
	int i = 0;
	int nTotal = 0;
	for (i = 1; i <= 100; i++)
	{
		nTotal += i;
	}
	return nTotal;
}


double Factorial(int n)
{
	int i;
	double dTotal = 1.0;
	for (i = 1; i <= n; i++)
	{
		dTotal *= i;
	}
	return dTotal;
}
void main()
{
	int ttt = Add();
	printf("%d\n", ttt);
	double dTtotal = Factorial(10);
	printf("%e\n", dTtotal);
}
