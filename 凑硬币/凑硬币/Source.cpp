#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

/*
int main()
{
	int x;
	int one, two, five;
	int exit = 0;
	scanf("%d", &x);
	for (one = 1; one < x * 10; one++)
	{
		for (two = 1; two < x * 10 / 2; two++)
		{
			for (five = 1; five < x * 10 / 5; five++)
			{
				if (one + two * 2 + five * 5 == x * 10)
				{
					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n", one, two, five, x);
					exit = 1;
					break;
				}
			}
			if (exit)break;
		}
		if (exit)break;
	}
	return 0;
}//����break*/

int main()
{
	int x;
	int one, two, five;
	int exit = 0;
	scanf("%d", &x);
	for (one = 1; one < x * 10; one++)
	{
		for (two = 1; two < x * 10 / 2; two++)
		{
			for (five = 1; five < x * 10 / 5; five++)
			{
				if (one + two * 2 + five * 5 == x * 10)
				{
					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n", one, two, five, x);
					exit = 1;
					goto out;
				}
			}
		}
	}
	out:
	return 0;
}//goto