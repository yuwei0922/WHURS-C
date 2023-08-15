#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


void main()
{
	//领任务
	FILE* fp = NULL;
	fp = fopen("D:\\123.txt", "w");
	if (fp == NULL)
	{
		printf("打开错了\n");
		return;
	}
	//开始
	fputc('Y', fp);
	fputc('i', fp);
	fputc('n', fp);
	fputc('\n', fp);
	fputc('q', fp);
	fputc('w', fp);
	fputc('6', fp);
	//收工
	fclose(fp);
}