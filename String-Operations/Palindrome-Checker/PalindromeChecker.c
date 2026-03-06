#include<stdio.h>

using namespace std;

int main()
{
	char a[100];
	int i, length = 0, is_palindrome = 1;
	
	printf("enter a string to check for palindrome: ");
	gets(a);
	
	// Find the length of the string
	for(i = 0; a[i] != '\0'; i++)
	{
		length++;
	}
	
	// Check characters from both ends moving toward the middle
	for(i = 0; i < length / 2; i++)
	{
		if(a[i] != a[length - 1 - i])
		{
			is_palindrome = 0; // Found a mismatch
			break;
		}
	}
	
	if(is_palindrome == 1)
	{
		printf("the string is a palindrome");
	}
	else
	{
		printf("the string is not a palindrome");
	}
	
	return 0;
}