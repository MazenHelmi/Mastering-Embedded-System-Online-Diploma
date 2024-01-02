/*
 ============================================================================
 Name        : ex2.c
 Author      : Mazen Helmi
 Date 	     : 02/01/2024
 Description : Write C Program to Print a Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input = 0;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d", &input);
	printf("You entered: %d", input);
	return 0;
}
