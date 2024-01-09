/*
 ============================================================================
 Name        : main.c
 Author      : Mazen Helmi
 Date 	     : 09/01/2024
 Description : This program asks user to enter a matrix(size of matrix is
 	 	 	   specified by user) and this program finds the transpose of
 	 	 	   that matrix and displays it.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int r, c, i, j;
	float m[10][10], t[10][10];

	printf("Enter rows of matrix: ");
	fflush(stdout);
	scanf("%d", &r);
	printf("Enter columns of matrix: ");
	fflush(stdout);
	scanf("%d", &c);

	printf("\nEnter elements of the matrix\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%f", &m[i][j]);
			t[j][i] = m[i][j];
		}
	}

	printf("\nEntered matrix:\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%.2f\t", m[i][j]);
		}
		printf("\n");
	}

	printf("\nTranspose matrix:\n");
	for(i = 0; i < c; i++)
	{
		for(j = 0; j < r; j++)
		{
			printf("%.2f\t", t[i][j]);
		}
		printf("\n");
	}

	return 0;
}
