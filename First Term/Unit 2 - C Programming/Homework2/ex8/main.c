/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 03/01/2024
 Description : C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char operation;
	float num1, num2;
	double result;
	printf("Enter operation either + or - or * or /\n");
	fflush(stdout);
	scanf("%c", &operation);
	printf("Enter the two operands: ");
	fflush(stdout);
	scanf("%f %f", &num1, &num2);
	switch(operation)
	{
	case '+':
	{
		result = num1 + num2;
		printf("%f %c %f = %f", num1, operation, num2, result);
	}
	break;
	case '-':
	{
		result = num1 - num2;
		printf("%f %c %f = %f", num1, operation, num2, result);
	}
	break;
	case '*':
	{
		result = num1 * num2;
		printf("%f %c %f = %f", num1, operation, num2, result);
	}
	break;
	case '/':
	{
		result = num1 / num2;
		printf("%f %c %f = %f", num1, operation, num2, result);
	}
	break;
	default:
	{
		printf("Invalid operation.");
	}
	break;
	}
	return 0;
}
