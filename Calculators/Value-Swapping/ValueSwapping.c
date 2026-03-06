#include<stdio.h>

using namespace std;

int main()
{
	int val_C, val_D, temp_storage;
	
	printf("enter an integer value for C: ");
	scanf("%d", &val_C);
	
	printf("enter an integer value for D: ");
	scanf("%d", &val_D);
	
	// The Swapping Logic
	temp_storage = val_C;  // Step 1: Store C's value in a temporary cup
	val_C = val_D;         // Step 2: Copy D's value into C
	val_D = temp_storage;  // Step 3: Copy the temporary value into D
	
	printf("\nThe new value of C = %d", val_C);
	printf("\nThe new value of D = %d", val_D);
	
	return 0;
}