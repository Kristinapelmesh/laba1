#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include<time.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int n, max = 0, min = 999;
	int* a;
	int i;
	srand(time(NULL));
	printf("Введите количество элементов:");
	scanf_s("%d", &n);
	a= (int*)malloc(n * sizeof(int));
	for (int i = 0; i <= n; i += 1)
	{
		*(a + i) = rand() % 51 - 40;
		 printf("a[%-2d]=%-5d", i, *(a + i));
		if ((i == 4) or (i == 9) or (i == 14) or (i == 19)) printf("\n");
	}
	for (int i = 0; i <= n; i += 1)
	{
		if (*(a + i)<min) min=*(a+i);
	}
	for (int i = 0; i <= n; i += 1)
	{
		if (*(a + i) > max ) max = *(a + i);
	}
	printf("\n");
	printf("min = %d \n", min);
	printf("max = %d \n", max);
	printf("Разница = %d \n", max - min);
	free(a);
	return 0;
}