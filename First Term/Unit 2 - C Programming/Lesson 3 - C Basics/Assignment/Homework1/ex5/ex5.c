/*
 ============================================================================
 Name        : ex5.c
 Author      : Mazen Helmi
 Date 	     : 02/01/2024
 Description : Write C Program to Find ASCII Value of a Character
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
	printf("ASCII value of %c = %d", character, character);
	return 0;
}
