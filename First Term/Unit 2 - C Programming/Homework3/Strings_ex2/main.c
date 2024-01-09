/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 09/01/2024
 Description : C Program to Find the Length of a String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char user_input_string[100];
	int i = 0, len = 0;

	printf("Enter your string: ");
	fflush(stdout);
	gets(user_input_string);

	while(user_input_string[i] != 0)
	{
		len++;
		i++;
	}

	printf("Length of string: %d", len);

	return 0;
}
