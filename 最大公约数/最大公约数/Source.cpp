#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��һ
/*
void main()
{
	int a, b;
	int min;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		min = a;
	}
	else {
		min = b;
	}
	int ret = 0;
	int i;
	for (i = 1; i < min; i++)
	{
		if (a % i == 0) {
			if (b % i == 0) {
				ret = i;
			}
		}
	}
	printf("%d��%d�����Լ����%d.\n",a, b, ret);
}*/

//����
/*���b����0�����������a�������Լ����
���򣬼���a����b����������a����b����b�����Ǹ�������
�ص���һ����

a  b  t
12 18 12
18 12 6
12 6  0
6  0
*/

int main()
{
	int a, b;
	int t;
	scanf("%d %d", &a, &b);
	while (b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	printf("gcd=%d\n", a);
}