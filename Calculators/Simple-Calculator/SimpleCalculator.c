#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	int N1, N2;
	char ch;
	
	// Input two integer values for calculation
	printf("Enter Two Integer Values please : ");
	scanf("%d %d", &N1, &N2);
	
	// Displaying the operation menu
	printf("For Addition Press---------------- +\n");
	printf("For Subtraction Press------------- -\n");
	printf("For Multiplication Press---------- *\n");
	printf("For Qoutient Press---------------- /\n");
	printf("For Remaintder Value Press-------- %c\n", '%');
	
	// Taking user choice using getche() to see the pressed key
	printf("Enter your choice please ==> ");
	ch = getche();
	printf("\n");
	
	// Switch case to handle different arithmetic operations
	switch(ch)
	{
		case '+':
			printf("Sum = %d\n", N1 + N2); 
			break;
		case '-':
			printf("Difference = %d\n", N1 - N2); 
			break;
		case '*':
			printf("Product = %d\n", N1 * N2); 
			break;
		case '/':
			printf("Qoutient = %d\n", N1 / N2); 
			break;
		case '%':
			printf("Remainder = %d\n", N1 % N2); 
			break;
		default:
			printf("Press the correct Choice\n TRY Again\n");
	}
	
	return(0);
}