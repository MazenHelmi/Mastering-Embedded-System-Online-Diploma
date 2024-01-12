/*
 ============================================================================
 Name        : ex2.c
 Author      : Mazen Helmi
 Date 	     : 12/01/2024
 Description : C Program to Calculate Factorial of a Number Using Recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

long long int factorial(int x);

int main(void)
{
	unsigned int num;

	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%u", &num);

	printf("\nFactorial(%u) = %llu", num, factorial(num));

	return 0;
}

long long int factorial(int x)
{
	if(x != 1)
		return x * factorial(x-1);
	else
		return 1;
}
