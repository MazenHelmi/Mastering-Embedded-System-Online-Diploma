/*
 ============================================================================
 Name        : ex3.c
 Author      : Mazen Helmi
 Date 	     : 12/01/2024
 Description : C Program to Reverse a Sentence Using Recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(void);

int main(void)
{
	printf("Enter a string to reverse: ");
	reverse();

	return 0;
}

void reverse(void)
{
	char c;
	fflush(stdout);
	scanf("%c", &c);
	if(c != '\n')
	{
		reverse();
		printf("%c", c);
	}
}
