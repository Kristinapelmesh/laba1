#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include<ctime>

int main()
{
	setlocale(LC_ALL, "rus");
	int n, m;
	int s,t;

	srand(time(NULL));
	printf("Введите количество строк и столбцов:");
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	
	int** a = (int**)malloc(n * sizeof(int));
	for (int i = 0; i <= n; i++)
	{
		a[i]= (int*)malloc(m * sizeof(int));
	}
	for (int i = 0; i <= n; i++)
	{
		
		printf("\n");
		for (int j = 0; j <= m; j++)
		{
			a[i][j] = rand() % 51 - 40;
			printf("%-5d  ", a[i][j]);
			
		}

	}
	for (int i = 0; i <= n; i++)
	{
		 s = 0;
		t = 0;
		printf("\n");
		for (int j = 0; j <= m; j++)
		{
			s += a[i][j];
			t += a[j][i];
		}
		
		printf(" Сумма строки--%d", s);
		printf("\n");
		printf("Сумма столбцов %d", t);
	}

	return 0;
}