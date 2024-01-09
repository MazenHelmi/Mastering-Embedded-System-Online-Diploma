/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 09/01/2024
 Description : C Program to search an element in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a[100], searched_element;
	int n, i, searched_element_position, search_flag = 0;

	printf("Enter no. of elements: ");
	fflush(stdout);
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Insert element no. %d: ", i+1);
		fflush(stdout);
		scanf("%f", &a[i]);
	}

	printf("\nEnter the element to be searched: ");
	fflush(stdout);
	scanf("%f", &searched_element);

	for(i = 0; i < n; i++)
	{
		if(a[i] == searched_element)
		{
			searched_element_position = i+1;
			search_flag = 1;
			break;
		}
	}

	if(search_flag == 0)
		printf("Element not found!");
	else
		printf("\nElement found! Searched element position: %d", searched_element_position);

	return 0;
}
