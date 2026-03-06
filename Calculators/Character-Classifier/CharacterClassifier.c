#include<stdio.h>

using namespace std;

int main()
{
	char character_input;
	
	printf("enter any character: ");
	scanf("%c", &character_input);
	
	// Check for Capital Letters (A-Z)
	if(character_input >= 65 && character_input <= 90)
	{
		printf("you entered a capital letter");
	}
	
	// Check for Small Letters (a-z)
	else if(character_input >= 97 && character_input <= 122)
	{
		printf("you entered a small letter");
	}
	
	// Check for Digits (0-9)
	else if(character_input >= 48 && character_input <= 57)
	{
		printf("you entered a digit");
	}
	
	// Check for Special Characters (remaining ASCII ranges)
	else if((character_input >= 0 && character_input <= 47) || 
	        (character_input >= 58 && character_input <= 64) || 
	        (character_input >= 91 && character_input <= 96) || 
	        (character_input >= 123 && character_input <= 127))
	{
		printf("you entered a special character");
	}
		
	return 0;
}