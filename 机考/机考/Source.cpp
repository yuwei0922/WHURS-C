#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct tagstudent {
	int nID;
	char nName[20];
	int nMath, nEnglish;
} STUDENT;

int main() {
	int i, j;
	STUDENT stu[5];
	FILE* fp = NULL;
	fp = fopen("D:\\2020302131119.txt", "r");

	if (fp == NULL) {
		printf("文件打开错误\n");
		return 0;
	}
	printf("文件打开成功\n");


	for (i = 0; i < 5; i++) {
		STUDENT* p = stu + i;
		fscanf(fp, "%d %s %d %d", &p->nID, p->nName, &p->nEnglish, &p->nMath);
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 4 - i; j > 0; j--) 
		{
			if (stu[j].nEnglish > stu[j - 1].nEnglish)
			{
				STUDENT tem = stu[j];
				stu[j] = stu[j - 1];
				stu[j - 1] = tem;
			}
		}
		printf("%d %s %d %d\n", stu[i].nID, stu[i].nName, stu[i].nEnglish, stu[i].nMath);
	}

	int id;
	printf("请输入学号：\n");
	scanf("%d", &id);
	for (i = 0; i < 5; i++)
	{
		if (stu[i].nID == id)
			printf("%s %d %d", stu[i].nName, stu[i].nEnglish, stu[i].nMath);
	}

	fclose(fp);

	return 0;
}