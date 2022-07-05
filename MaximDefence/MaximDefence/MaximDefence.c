#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main()
{
	system("chcp 1251");
	system("cls");

	int N = 0, M = 0, kol = 0, answer = 1, A[100][100] = { 0 };

	printf("Введите размерность матрицы N x M:\n");
	scanf("%d %d", &N, &M);
	printf("Введите саму матрицу:\n");
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) scanf("%d", &A[i][j]);

	for (int i = 1; i < N; i += 2)
	{
		int Min = 2000000000;
		for (int j = 0; j < M; j++) if (A[i][j] < Min) Min = A[i][j];
		kol++;
		answer *= Min;
	}

	if (kol == 0)
	{
		printf("Нет подходящих строк для нахождения произведения минимумов!\n");
	}
	else
	{
		printf("Произведение минимумов среди строк с нечётными номерами: \n");
		printf("%d\n", answer);
	}

	puts("");
	system("pause");
	return 0;
}