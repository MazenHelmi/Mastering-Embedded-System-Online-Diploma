/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 03/01/2024
 Description : C Program to Check Vowel or Consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char x;
	printf("Enter an alphabet character: ");
	fflush(stdout);
	scanf("%c", &x);
	switch(x)
	{
	case 'a':
		printf("%c is a vowel.", x);
		break;
	case 'e':
		printf("%c is a vowel.", x);
		break;
	case 'i':
		printf("%c is a vowel.", x);
		break;
	case 'o':
		printf("%c is a vowel.", x);
		break;
	case 'u':
		printf("%c is a vowel.", x);
		break;
	case 'A':
		printf("%c is a vowel.", x);
		break;
	case 'E':
		printf("%c is a vowel.", x);
		break;
	case 'I':
		printf("%c is a vowel.", x);
		break;
	case 'O':
		printf("%c is a vowel.", x);
		break;
	case 'U':
		printf("%c is a vowel.", x);
		break;
	default:
		printf("%c is a consonant.", x);
		break;
	}
	return 0;
}
