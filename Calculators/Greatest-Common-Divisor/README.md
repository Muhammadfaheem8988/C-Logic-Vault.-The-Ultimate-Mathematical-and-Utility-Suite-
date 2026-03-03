This program calculates the Greatest Common Divisor (GCD)—also known as the Highest Common Factor (HCF)—of two integers. It uses the Euclidean Algorithm, a classic mathematical method based on the principle that the GCD of two numbers also divides their difference.

The logic process is as follows:

Modulo Operation: Find the remainder of the first number divided by the second.

Shift Values: The second number becomes the new "first number," and the remainder becomes the new "second number."

Looping: Repeat this until the second number reaches zero.

Result: The remaining first number is the GCD.