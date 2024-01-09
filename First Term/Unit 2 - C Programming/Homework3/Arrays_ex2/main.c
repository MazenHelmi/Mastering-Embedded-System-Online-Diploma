/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 09/01/2024
 Description : This program takes n number of elements from user(where, n is
  	  	  	   specified by user), stores data in an array and calculates the
  	  	  	   average of those number.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a[100], sum = 0, average;
	int n, i;

	printf("Enter the number of data inputs: ");
	fflush(stdout);
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("%d. Enter number: ", i);
		fflush(stdout);
		scanf("%f", &a[i]);
		sum += a[i];
	}

	average = sum/n;
	printf("Average = %.2f", average);

	return 0;
}
