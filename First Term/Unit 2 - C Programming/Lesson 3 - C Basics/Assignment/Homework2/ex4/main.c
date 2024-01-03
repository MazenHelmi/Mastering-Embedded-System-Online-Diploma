/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 03/01/2024
 Description : C Program to Check Whether a Number is Positive or Negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &num);
	if(num > 0)
		printf("%.2f is positive.", num);
	else if(num < 0)
		printf("%.2f is negative.", num);
	else if(num == 0)
		printf("You entered zero.");
	return 0;
}
