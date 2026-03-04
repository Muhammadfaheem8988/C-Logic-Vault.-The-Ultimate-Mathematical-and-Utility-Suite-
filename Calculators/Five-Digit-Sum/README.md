This program calculates the total sum of the individual digits in a 5-digit integer. It serves as a practical exercise in using base-10 arithmetic to deconstruct numbers.

The logic follows a repetitive Extract and Shrink pattern:

Modulo (% 10): Grabs the rightmost digit.

Division (/ 10): Removes the rightmost digit from the number, effectively shifting all digits one place to the right.

By repeating this process five times, the program successfully isolates every place value and aggregates them into a final sum.