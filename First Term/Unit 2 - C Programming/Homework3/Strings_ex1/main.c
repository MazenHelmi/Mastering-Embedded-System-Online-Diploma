/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 09/01/2024
 Description : C Program to Find the Frequency of Characters in a String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char user_input_string[100], character;
	int i = 0, character_freq = 0;

	printf("Enter your string: ");
	fflush(stdout);
	gets(user_input_string);

	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c", &character);

	while(user_input_string[i] != 0)
	{
		if(user_input_string[i] == character)
			character_freq++;
		i++;
	}

	printf("\nFrequency of %c = %d", character, character_freq);

	return 0;
}
