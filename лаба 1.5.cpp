#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include "string.h"
#include <Windows.h>
using namespace std;

struct student
{
	char famil[20];
	char name[20];
	char age[20];
};

int main(void)
{
	setlocale(LC_ALL, "Russian");
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	int i,n ;
	printf("Введите колличество студентов в списке:");
	scanf_s("%d", &n);

	student* stud = new student [n];
	printf("Введите данные студента на английском:\n");
	gets_s(stud[0].name, 15);
	fflush(stdin);
	for (int i = 0; i < n; i++) {
		fflush(stdin);
		printf("Имя: ");
		gets_s(stud[i].name, 15);
		fflush(stdin);
		printf("Фамилия: ");
		gets_s(stud[i].famil, 20);
		fflush(stdin);
		printf("Возраст: ");
		gets_s(stud[i].age, 20);
	}

	for (i = 0; i < n; i++)
	{
		printf("Cтудент %s %s,возраст: %s \n", stud[i].famil, stud[i].name, stud[i].age);

	}
	int prov = 0;
	char searchname[20];
	printf("Введите имя искомого: ");
	gets_s(searchname, 20);
	for (int i = 0; i < n; i++) {
		if (strcmp(stud[i].name, searchname) == 0)
		{
			printf("Имя: %s \n", stud[i].name);
			printf("Фамилия: %s \n", stud[i].famil);
			printf("Возраст: %s \n", stud[i].age);
			prov = prov + 1;
		}
	}
	if (prov == 0)
		printf("Ничего не найдено");
	getchar();
	delete[] stud;
	return 0;
}