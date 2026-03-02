#include<stdio.h>

using namespace std;

int main()
{
	long int decimal_input, temp_input;
	int binary_array[64]; // Array to store binary digits
	int index = 0;
	
	// Input a decimal number for conversion
	printf("enter a decimal number: ");
	scanf("%ld", &decimal_input);
	
	// Store original value for final display
	temp_input = decimal_input;
	
	// Special case for zero
	if (decimal_input == 0) 
	{
		printf("\nthe binary of 0 is = 0\n");
		return 0;
	}

	// Logic to store remainders in the array
	while(decimal_input > 0)
	{
		binary_array[index] = decimal_input % 2;
		decimal_input = decimal_input / 2;
		index++;
	}
	
	// Display the binary result by printing the array in reverse
	printf("\nthe binary of %ld is = ", temp_input);
	for(int j = index - 1; j >= 0; j--)
	{
		printf("%d", binary_array[j]);
	}
	printf("\n");
	
	return(0);
}