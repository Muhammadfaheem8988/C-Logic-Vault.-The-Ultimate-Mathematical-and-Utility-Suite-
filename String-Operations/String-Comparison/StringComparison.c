#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	char first_string[20], second_string[20];
	int comparison_result;
	
	// Input for the first string
	printf("enter the string 1: ");
	scanf("%s", first_string);
	
	// Input for the second string
	printf("enter the string 2: ");
	scanf("%s", second_string);
	
	// Comparing strings using strcmp function
	comparison_result = strcmp(first_string, second_string);
	
	// Logic to determine which string is lexicographically greater
	if(comparison_result > 0)
	{
		printf("string %s is greater", first_string);
	}
	else if(comparison_result < 0)
	{
		printf("string %s is greater", second_string);
	}
	else
	{
		printf("both strings are equal");
	}
	
	return 0;
}