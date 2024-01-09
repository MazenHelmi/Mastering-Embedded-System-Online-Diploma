/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 03/01/2024
 Description : C Program to Check Whether a Character is an Alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char character;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &character);
	if(((character >= 'A') && (character <= 'Z')) || ((character >= 'a') && (character <= 'z')))
		printf("%c is an alphabet.", character);
	else
		printf("%c is not an alphabet.", character);
	return 0;
}
