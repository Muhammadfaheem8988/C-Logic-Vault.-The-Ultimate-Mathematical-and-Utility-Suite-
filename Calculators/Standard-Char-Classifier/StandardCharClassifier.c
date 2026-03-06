#include <stdio.h>
#include <ctype.h> // Required for isupper, islower, isdigit, and ispunct

using namespace std;

int main()
{
	char ch;
	
	printf("enter any character: ");
	scanf("%c", &ch);
	
	// isupper(ch) returns true if the character is A-Z
	if (isupper(ch))
	{
		printf("you entered a capital letter");
	}
	
	// islower(ch) returns true if the character is a-z
	else if (islower(ch))
	{
		printf("you entered a small letter");
	}
	
	// isdigit(ch) returns true if the character is 0-9
	else if (isdigit(ch))
	{
		printf("you entered a digit");
	}
	
	// ispunct(ch) returns true for punctuation/symbols
	else if (ispunct(ch))
	{
		printf("you entered a special character");
	}
	
	// Catch-all for spaces or control characters
	else
	{
		printf("you entered a space or other character");
	}
		
	return 0;
}