#include<stdio.h>

using namespace std;

int main()
{
	int C, D;
	
	printf("enter an integer value for C: ");
	scanf("%d", &C);
	
	printf("enter an integer value for D: ");
	scanf("%d", &D);
	
	// The Mathematical Swapping Logic (No Temp Variable)
	C = C + D;  // C now holds the sum of both numbers
	D = C - D;  // Subtracting original D from the sum gives original C
	C = C - D;  // Subtracting the new D (original C) from the sum gives original D
	
	printf("\nThe new value of C = %d", C);
	printf("\nThe new value of D = %d", D);
	
	return 0;
}