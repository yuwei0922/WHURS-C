#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


void main()
{
	//������
	FILE* fp = NULL;
	fp = fopen("D:\\123.txt", "w");
	if (fp == NULL)
	{
		printf("�򿪴���\n");
		return;
	}
	//��ʼ
	fputc('Y', fp);
	fputc('i', fp);
	fputc('n', fp);
	fputc('\n', fp);
	fputc('q', fp);
	fputc('w', fp);
	fputc('6', fp);
	//�չ�
	fclose(fp);
}