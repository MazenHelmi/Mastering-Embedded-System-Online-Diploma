/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 03/01/2024
 Description : C Program to Find Largest Number Among Three Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, largest;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);
	largest = a;
	if(b > a)
	{
		largest = b;
		if(c > b)
			largest = c;
	}
	else if(c > a)
		largest = c;
	printf("Largest number = %.2f", largest);
	return 0;
}
