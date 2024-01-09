/*
 ============================================================================
 Name        : ex4.c
 Author      : Mazen Helmi
 Date 	     : 02/01/2024
 Description : Write C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float float1 = 0, float2 = 0;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f", &float1, &float2);
	printf("Product: %f", float1*float2);
	return 0;
}
