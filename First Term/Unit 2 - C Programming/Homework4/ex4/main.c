/*
 ============================================================================
 Name        : ex4.c
 Author      : Mazen Helmi
 Date 	     : 12/01/2024
 Description : C Program to Calculate the Power of a Number Using Recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

long long int power(int a, int b);

int main(void)
{
	int num;
	unsigned int pwr;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d", &num);

	printf("Enter power number(positive integer): ");
	fflush(stdout);
	scanf("%d", &pwr);

	printf("%d^%u = %lld", num, pwr, power(num, pwr));
	return 0;
}

long long int power(int a, int b)
{
	if(b > 1)
		return a * power(a, b-1);
	else
		return a;
}
