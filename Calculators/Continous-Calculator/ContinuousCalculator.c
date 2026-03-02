#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	int N1, N2;
	char ch;
	
	// Infinite loop to keep the calculator running
	while(1)
	{
		printf("\nEnter Two Integer Values please (or press 0 0 to exit) : ");
		scanf("%d %d", &N1, &N2);
		
		// Logic to break the loop if both inputs are 0
		if(N1 == 0 && N2 == 0)
		{
			break;
		}

		printf("For Addition Press---------------- +\n");
		printf("For Subtraction Press------------- -\n");
		printf("For Multiplication Press---------- *\n");
		printf("For Qoutient Press---------------- /\n");
		printf("For Remaintder Value Press-------- %c\n", '%');
		printf("For Exit Press-------------------- x\n");
		
		printf("Enter your choice please ==> ");
		ch = getche();
		printf("\n");

		// Handling the choice to exit or calculate
		if(ch == 'x' || ch == 'X')
		{
			break;
		}

		switch(ch)
		{
			case '+':
				printf("Sum = %d\n", N1 + N2); break;
			case '-':
				printf("Difference = %d\n", N1 - N2); break;
			case '*':
				printf("Product = %d\n", N1 * N2); break;
			case '/':
				if(N2 != 0)
					printf("Qoutient = %d\n", N1 / N2);
				else
					printf("Error: Division by zero\n");
				break;
			case '%':
				printf("Remainder = %d\n", N1 % N2); break;
			default:
				printf("Press the correct Choice\n TRY Again\n");
		}
		
		printf("------------------------------\n");
	}
	
	printf("\nProgram Exited. Goodbye!");
	return(0);
}