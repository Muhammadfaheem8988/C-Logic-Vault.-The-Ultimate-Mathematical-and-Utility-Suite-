#include<stdio.h>

using namespace std;

int main()
{
	char a[100];
	int i, length = 0;
	
	printf("enter the string: ");
	gets(a);
	
	// Loop until the null terminator is reached
	for(i = 0; a[i] != '\0'; i++)
	{
		length++;
	}
	
	printf("the length of the string is: %d", length);
	
	return 0;
}