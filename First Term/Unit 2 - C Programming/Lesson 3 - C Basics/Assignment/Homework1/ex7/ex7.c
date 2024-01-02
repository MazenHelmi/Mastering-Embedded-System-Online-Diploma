/*
 ============================================================================
 Name        : ex7.c
 Author      : Mazen Helmi
 Date 	     : 02/01/2024
 Description : Write Source Code to Swap Two Numbers without temp variable. (Interview Question)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a = 0, b = 0;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Value of a after swap: %.2f\nValue of b after swap: %.2f", a, b);

	return 0;
}
