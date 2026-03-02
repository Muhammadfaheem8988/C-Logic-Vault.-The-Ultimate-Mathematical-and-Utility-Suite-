#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	char first_string[20], second_string[20];
	int comparison_result;
	int length_one, length_two;
	
	// Input for the first string
	printf("enter the string 1: ");
	scanf("%s", first_string);
	
	// Input for the second string
	printf("enter the string 2: ");
	scanf("%s", second_string);
	
	// Calculating lengths of both strings
	length_one = strlen(first_string);
	length_two = strlen(second_string);
	
	// Comparing strings using strcmp function
	comparison_result = strcmp(first_string, second_string);
	
	// Displaying string lengths
	printf("\nLength of string 1: %d", length_one);
	printf("\nLength of string 2: %d", length_two);
	
	// Logic to determine which string is lexicographically greater
	if(comparison_result > 0)
	{
		printf("\nstring %s is lexicographically greater", first_string);
	}
	else if(comparison_result < 0)
	{
		printf("\nstring %s is lexicographically greater", second_string);
	}
	else
	{
		printf("\nboth strings are equal");
	}
	
	return 0;
}