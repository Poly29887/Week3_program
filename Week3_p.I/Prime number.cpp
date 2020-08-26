#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2, i, j,count;
	printf("Input starting number of range : ");
	scanf("%d",&num1);
	printf("Input ending number of range : ");
	scanf("%d",&num2);
	if(num1<num2)
	{ 
	  for (i = num1; i <= num2; i++)
	  { 
		 count = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (i == num1)
		{
			printf("The prime number between %d and %d are :\n",num1,num2);
	    }
		if (count == 2)
		{
			printf("%d ",i);
	    }

	  }
	}
	else
	{
		for (i = num2; i <= num1; i++)
		{
			count = 0;
			for (j = 1; j <= i; j++)
			{
				if (i % j == 0)
				{
						count++;
				}
			}
			if (i == num2)
			{
				printf("The prime number between %d and %d are :\n", num1, num2);
			}
			if (count == 2)
			{
				printf("%d ", i);
			}

		}
	}
	printf("\n");
}