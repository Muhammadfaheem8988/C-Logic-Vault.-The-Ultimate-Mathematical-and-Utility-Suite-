#include<stdio.h>

using namespace std;

int main()
{
	int matrix[2][3], transpose[3][2];
	int i, j;
	
	// Input for the original 2x3 Matrix
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("enter value for matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	// Transpose Logic: matrix[i][j] becomes transpose[j][i]
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			transpose[j][i] = matrix[i][j];
		}
	}
	
	printf("\n--- Original Matrix (2x3) ---\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\n--- Transposed Matrix (3x2) ---\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}