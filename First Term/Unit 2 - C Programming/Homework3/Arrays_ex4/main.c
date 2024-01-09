/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 09/01/2024
 Description : C Program to insert an element in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a[100], new_element;
	int n, i, new_element_position;

	printf("Enter no. of elements: ");
	fflush(stdout);
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Insert element no. %d: ", i+1);
		fflush(stdout);
		scanf("%f", &a[i]);
	}

	printf("\nEnter the element to be inserted: ");
	fflush(stdout);
	scanf("%f", &new_element);

	printf("\nEnter new element's location: ");
	fflush(stdout);
	scanf("%d", &new_element_position);

	if(new_element_position <= n + 1)
	{
		for(i = n + 1; i > new_element_position - 1; i--)
		{
			a[i] = a[i-1];
		}
		a[new_element_position - 1] = new_element;

		printf("\nNew array:\n");
		for(i = 0; i < n + 1; i++)
		{
			printf("%.2f\t", a[i]);
		}
	}
	else
		printf("\nInvalid position for the element!");

	return 0;
}
