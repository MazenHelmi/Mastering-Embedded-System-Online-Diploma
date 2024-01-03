/*
 ============================================================================
 Name        : ex3.c
 Author      : Mazen Helmi
 Date 	     : 02/01/2024
 Description : Write C Program to Add Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int int1 = 0, int2 = 0;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d", &int1, &int2);
	printf("Sum: %d", int1 + int2);
	return 0;
}
