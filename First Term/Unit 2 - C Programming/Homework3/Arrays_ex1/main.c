/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 08/01/2024
 Description : Write a C program to find the sum of two matrix of order 2*2
 	 	 	   using multidimensional arrays where, elements of matrix are
 	 	 	   entered by user.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float matrix1[2][2], matrix2[2][2];
	int i, j;

	/* Lines to input matrix1 from user */
	printf("Enter the elements of the first matrix\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%f", &matrix1[i][j]);
		}
	}

	/* Lines to input matrix1 from user */
	printf("Enter the elements of the second matrix\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter b%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%f", &matrix2[i][j]);
		}
	}

	/* Finding the sum of the two matrices */
	printf("\nSum of the two matrices:\n%.2f\t%.2f\n%.2f\t%.2f",
			matrix1[0][0] + matrix2[0][0],
			matrix1[0][1] + matrix2[0][1],
			matrix1[1][0] + matrix2[1][0],
			matrix1[1][1] + matrix2[1][1]);

	return 0;
}
