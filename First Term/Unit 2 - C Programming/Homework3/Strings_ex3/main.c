/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 09/01/2024
 Description : C Program to Reverse String Without Using Library Function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char user_input_string[100], reversed_string[100];
	int i = 0, len = 0;

	printf("Enter your string: ");
	fflush(stdout);
	gets(user_input_string);

	while(user_input_string[i] != 0)
	{
		len++;
		i++;
	}

	for(i = 0 ; i < len; i++)
	{
		reversed_string[i] = user_input_string[len - 1 - i];
	}
	reversed_string[len] = '\0';

	printf("Reversed string: %s", reversed_string);

	return 0;
}
