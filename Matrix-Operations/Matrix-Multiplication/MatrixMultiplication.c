#include<stdio.h>

using namespace std;

int main()
{
	int a[2][3], b[3][3], c[2][3];
	int i, j, k;
	
	// Input for Matrix A (2x3)
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("enter value for a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	// Input for Matrix B (3x3)
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("enter value for b[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	
	// Multiplication Logic
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			c[i][j] = 0; // Initialize result cell
			for(k = 0; k < 3; k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}
	
	printf("\n--- Resultant Matrix C ---\n");
	
	// Output the resulting 2x3 Matrix
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}