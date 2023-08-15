#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void SelectionSort(int a[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		int tmpMin = i;
			//用来记录从第i个到第size-1个元素中，最小的那个元素的下标
			for (int j = i + 1; j < size; ++j)
			{
				if (a[j] < a[tmpMin])
				{
					tmpMin = j;
				}
			}
			int tmp = a[i];
			a[i] = a[tmpMin];
			a[tmpMin] = tmp;
	}
}
void main()
{
	int a[5];
	int m, n;
	printf("请输入五个整数:\n");
	for (m = 0; m < 5; m++)
	{
		scanf("%d", &a[m]);
	}
	SelectionSort(a, sizeof(a) / sizeof(a[0]));
	for (n = 0; n < 5; n++)
	{
		printf("%d", a[n]);
	}
}

