/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 03/01/2024
 Description : C Program to Find Factorial of a Number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i;
	unsigned long long factorial = 1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &n);
	if(n < 0)
		printf("Error! Factorial of a negative number doesn't exist.");
	else if(n == 0)
		printf("Factorial = %llu", factorial);
	else
	{
		for(i = 1; i <= n; i++)
		{
			factorial *= i;
		}
		printf("Factorial = %llu", factorial);
	}
	return 0;
}
