#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i,n, num[1000];
	printf("Input the number of elements to store in the array : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("element - %d : ",i+1);
		scanf("%d", &num[i]);
	}
	printf("The values store into the array are :");
	for (i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\nThe values store into the array in reverse are :");
	for (i = n-1; i >= 0; i--)
	{
		printf("%d ", num[i]);
	}
}