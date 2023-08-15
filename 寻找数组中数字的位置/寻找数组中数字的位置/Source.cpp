#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int search(int key, int a[], int len)
{
	int ret = 0;
	int i;
	for (i = 0; i < len; i++)
	{
		if (key == a[i])
		{
			ret = ++i;
			break;
		}
	}
	return ret;
}

int main()
{
	int key;
	int a[] = { 1,2,4,7,6,34,56,32,12,89,15,33 };
	printf("请输入你想要寻找的数：\n");
	scanf("%d", &key);
	int r = search(key, a, sizeof(a) / sizeof(a[0]));
	printf("%d\n", r);
	return 0;
}