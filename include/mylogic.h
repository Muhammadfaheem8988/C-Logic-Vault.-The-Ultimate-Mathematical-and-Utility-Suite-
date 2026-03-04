#ifndef MYLOGIC_H
#define MYLOGIC_H

// Function to find GCD
int find_gcd(int second_num, int first_num)
{
    int remainder;
    while(second_num != 0)
    {
        remainder = first_number % second_num;
        first_number = second_num;
        second_number = remainder;
    }
    return first_number;
}

// Function to find Factorial
long long int find_factorial(int n)
{
    long long int result = 1;
    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

#endif