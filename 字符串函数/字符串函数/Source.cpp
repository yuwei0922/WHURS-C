#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


/*int Function(int a, int b) {
	a++; b++;
}
void main() {
	int a = 0, b = 0;
	Function(a, b);
	printf("a=%d b=%d\n", a, b);
}*/

/*
int fun2(int a, int b);//函数声明
int fun1(int a, int b);//函数声明
void main();//函数声明

int fun2(int a, int b) {
	int c = a * b % 3;
	return c;
}
int fun1(int a, int b) {
	a += a;
	b += b;
	int c = fun2(a, b);
	return c * c;
}
void main() {
	int x = 11, y = 19;
	printf("%d\n", fun1(x, y));
}*/

/*
void Function(int* a, int n){
	for (int i=0; i<n; i++){
		a[i] = 1;
	}
}

void main(){
	int a[10] = {0};
	Function(a, 10);
	for (int i=0; i<10; i++){
		printf("a[%d] = %d\n", i, a[i]);
	}
}*/


#include <string.h>

int main() {
	char string[128];

	strcpy_s(string, sizeof(string), "Hello world from ");
	strcat_s(string, sizeof(string), "strcpy ");
	strcat_s(string, sizeof(string), "and ");
	strcat_s(string, sizeof(string), "strcat!");
	printf("String = %s\n", string);
}


/*
#include<string.h>

void GetMemory(char** p) {
	(*p) = new char[100];
}

int main() {
	char* str = NULL;
	GetMemory(&str);
	strcpy_s(str,7,"Hello!");
	printf(str);
}*/

/*
char* GetMemory(void) {
	char p[] = "Hello!";
	return p;
}
void main(void) {
	char* str = NULL;
	str = GetMemory();
	printf("%s\n",str);
}*/