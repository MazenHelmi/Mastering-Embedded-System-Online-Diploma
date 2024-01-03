/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 03/01/2024
 Description : C Program to Calculate Sum of Natural Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i;
	unsigned long long sum = 0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &n);
	if(n < 0)
		printf("Error! Negative integer entered.");
	else
	{
		for(i = 0; i <= n; i++)
			sum += i;
		printf("Sum of integers from 0 to %d = %llu", n, sum);
	}
	return 0;
}
