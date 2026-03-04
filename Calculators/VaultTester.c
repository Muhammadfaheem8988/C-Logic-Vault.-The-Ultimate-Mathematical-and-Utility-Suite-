#include <stdio.h>
#include "mylogic.h"

using namespace std;

int main() {
    int x = 24, y = 36;
    
    printf("--- Library Test ---\n");
    printf("GCD of %d and %d is: %d\n", x, y, find_gcd(x, y));
    printf("LCM of %d and %d is: %d\n", x, y, find_lcm(x, y));
    
    if(is_odd(x)) printf("%d is Odd\n", x);
    else printf("%d is Even\n", x);
    
    printf("Factorial of 5 is: %lld\n", calculate_factorial(5));
    printf("Margin on $100 cost and $120 sell: %.2f%%\n", calculate_margin_percentage(100, 120));

    return 0;
}