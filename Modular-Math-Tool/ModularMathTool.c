#include <stdio.h>
#include "mylogic.h" // Including my personal logic vault

using namespace std;

int main()
{
    int a, b;
    printf("Enter two numbers for GCD: ");
    scanf("%d %d", &a, &b);
    
    // Using the function from mylogic.h
    printf("GCD is: %d\n", find_gcd(b, a));
    
    int fact_num;
    printf("\nEnter a number for Factorial: ");
    scanf("%d", &fact_num);
    
    // Using the factorial function from mylogic.h
    printf("Factorial is: %lld\n", find_factorial(fact_num));
    
    return 0;
}