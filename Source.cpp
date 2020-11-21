#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void handleInput(int** pN, int N);
int main()
{
	int N = 0;
	printf("Enter N (2-50) : ");
	scanf("%d", &N);
	if (N < 2 || N > 50)
	{
		printf("INVALID INPUT!");
		return 0;
	}
	int** pN;
	pN = (int**)malloc(N * sizeof(int *));
	printf("||Enter your original matrix||\n");
	for (int i = 0; i < N; i++)
	{
		pN[i] = (int *)malloc(N * sizeof(int));
	}
	handleInput(pN,N);
	printf("------------------------------------------------------\n");
	printf("||This is your transpose matrix||\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ",pN[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void handleInput(int **pN,int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &pN[j][i]);
		}
	}
}