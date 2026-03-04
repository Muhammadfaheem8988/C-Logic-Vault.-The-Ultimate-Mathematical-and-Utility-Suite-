#ifndef MYLOGIC_H
#define MYLOGIC_H

/* --- MATH & LOGIC FUNCTIONS --- */

// 1. Greatest Common Divisor (Euclidean Algorithm)
int find_gcd(int first_num, int second_num) {
    if (first_num < 0) first_num = -first_num;
    if (second_num < 0) second_num = -second_num;
    int remainder;
    while (second_num != 0) {
        remainder = first_num % second_num;
        first_num = second_num;
        second_num = remainder;
    }
    return first_num;
}

// 2. Least Common Multiple
int find_lcm(int first_num, int second_num) {
    int gcd = find_gcd(first_num, second_num);
    if (gcd == 0) return 0;
    // LCM = (|a*b|) / GCD
    long long product = (long long)first_num * second_num;
    if (product < 0) product = -product;
    return (int)(product / gcd);
}

// 3. Factorial (Large Scale)
long long int calculate_factorial(int n) {
    if (n < 0) return -1; // Error code for negative
    long long int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 4. Parity Check (Bitwise Even/Odd)
// Returns 1 for Odd, 0 for Even
int is_odd(int n) {
    return (n & 1);
}

/* --- FINANCIAL FUNCTIONS --- */

// 5. Profit/Loss Percentage
float calculate_margin_percentage(float cost, float sell) {
    if (cost == 0) return 0;
    float diff = sell - cost;
    return (diff / cost) * 100;
}

// 6. Unit Cost Price
float calculate_unit_cost(float total_sell, float total_profit, float quantity) {
    if (quantity <= 0) return 0;
    float total_cost = total_sell - total_profit;
    return total_cost / quantity;
}

#endif