#include <stdio.h>
// #include <conio.h> // Usually needed for getch(), can be removed for standard execution

using namespace std;

int main()
{
	int numbers[4], i, j;
	
	// Input loop: iterates from 0 to 3
	for(i = 0; i < 4; i++)
	{
		printf("enter the value for array index %d: ", i);
		scanf("%d", &numbers[i]);
	}
	
    printf("\n--- Array Elements ---\n");

    // Output loop: displays the elements
    for(j = 0; j < 4; j++)
    {
	    printf("the element at index %d is: %d \n", j, numbers[j]);
    }

    return 0;
}