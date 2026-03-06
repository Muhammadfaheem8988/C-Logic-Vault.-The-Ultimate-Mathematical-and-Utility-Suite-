#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	char string_input[100];
	int length;
	
	printf("enter the first string: ");
	
	// Using gets to input string
	gets(string_input);
	
	// strlen() counts characters until it hits the null terminator (\0)
	length = strlen(string_input);
	
	printf("the length of the string is: %d", length);
	
	return 0;
}