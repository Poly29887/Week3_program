#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int row,i,j,keep = 1;
	printf("Input number of rows: ");
	scanf("%d", &row);
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= keep; j++)
		{
			printf("*");
		}
		keep += 2;
		printf("\n");
	}
	i = row - 1; 
	keep = 1 + ((i-1) * 2);
	for (i = 1; i <= row-1; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= keep; j++)
		{
			printf("*");
		}
		keep -= 2;
		printf("\n");
	}

}