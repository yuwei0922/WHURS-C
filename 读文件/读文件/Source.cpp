#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


void main()
{
	//������
	FILE* fp = NULL;
	fp = fopen("D:\\123.txt", "r");
	if (fp == NULL)
	{
		printf("�򿪴���\n");
		return;
	}
	//��ʼ
	/*char cText;
	for (int i = 0; i < 10; i++)
	{
		cText = fgetc(fp);
		printf("%c", cText);
	}*/
	char cString[1024] = { 0 };
	typedef struct tagStudent {
		int nId;
		char cName[120];
		double dS[2];
	}STUDENT;
	STUDENT SD[1000];
	int nCount = 0;
	for (;;)
	{
		if (feof(fp))
			break;
		/*cTxt = fgetc(fp);
		printf("%c", cTxt);*/
		/*fgets(cString, 1024, fp);
		printf("%s", cString);*/
		//sscanf(cString, "%d,%s,%lf,%lf", &nId, cName, &dS[0], &dS[1]);

	    fgets(cString, 1024, fp);
		STUDENT* pSD = SD + nCount;
		sscanf(cString, "%d %s %lf %lf", &pSD->nId, pSD->cName, &pSD->dS[0], &pSD->dS[1]);//���ַ�������

			/*STUDENT* pSD = SD + nCount;
			fscanf(fp, "%d,%s,%lf,%lf", &pSD->nId, pSD->cName, &pSD->dS[0], &pSD->dS[1]);//��ָ�����*/
			printf("%d %s %lf %lf\n",  pSD->nId, pSD->cName, pSD->dS[0], pSD->dS[1]);
			nCount++;
	}    
	//�չ�
	fclose(fp);
}