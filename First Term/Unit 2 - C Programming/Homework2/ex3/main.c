/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 03/01/2024
 Description : C Program to Find Largest Number Among Three Numbers
 	 	 	   NOTE: there is a more efficient way but it's not this way (nested if).
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);
	if(b > a)
	{
		if(c > b)
			printf("Largest number = %.2f", c);
		else
			printf("Largest number = %.2f", b);
	}
	else if(c > a)
		printf("Largest number = %.2f", c);
	else
		printf("Largest number = %.2f", a);
	return 0;
}
