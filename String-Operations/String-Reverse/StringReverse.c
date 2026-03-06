#include<stdio.h>

using namespace std;

int main()
{
	char a[100];
	int i, length = 0;
	
	printf("enter the string: ");
	gets(a);
	
	// First, find the length of the string
	for(i = 0; a[i] != '\0'; i++)
	{
		length++;
	}
	
	printf("the reversed string is: ");
	
	// Loop backwards from the last character (length - 1) down to index 0
	for(i = length - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
	
	return 0;
}