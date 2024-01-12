/*
 ============================================================================
 Name        : ex1.c
 Author      : Mazen Helmi
 Date 	     : 12/01/2024
 Description : Prime numbers between two intervals by making user-defined
 	 	 	   function.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void primeNumbersInRange(int a, int b);

int main(void)
{
	int num1, num2;

	printf("Enter two numbers to find prime numbers between them:\n");
	fflush(stdout);
	scanf("%d %d", &num1, &num2);

	primeNumbersInRange(num1, num2);

	return 0;
}

void primeNumbersInRange(int a, int b)
{
	int i, j, flag;
	printf("Prime number between %d and %d are: ", a, b);
	for(i = a + 1; i < b; i++)
	{
		flag = 0;

		for(j = 2; j < i / 2; j++)
		{
			if(i % j == 0)
			{
				flag = 1;
				break;
			}
		}

		if(flag == 0)
		{
			printf("%d ", i);
		}
	}
}
