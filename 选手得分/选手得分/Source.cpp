#include<stdio.h>
#include<stdlib.h>

float q(float score[], float n)
{
	int i;
	float sum = 0.0, average = 0.0;
	float max = score[0], min = score[0];
	for (i = 0; i < n; i++)
	{
		if (max < score[i])
		{
			max = score[i];
		}
		if(min>score[i])
		{ 
			min = score[i];
		}
		sum += score[i];

	}
	sum = sum - max - min;
	average = sum / (n - 2);
	return average;
}

int main()
{
	int n;
	printf("评委人数:");
	scanf_s("%d", &n);
    float score[1000];
	for (int i = 0; i < n; i++)
	{
		printf("%d号评委打分:",i+1);
		scanf_s("%e", &score[i]);
	}
	double a = q(score, n);
	printf("平均分为:");
	printf("%.2lf\n", a);
	return 0;
}