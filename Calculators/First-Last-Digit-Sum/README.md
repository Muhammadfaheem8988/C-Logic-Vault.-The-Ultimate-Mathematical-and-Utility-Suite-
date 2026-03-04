This program extracts and sums the boundary digits of a four-digit integer. It demonstrates how integer division and the modulus operator can be used to isolate specific place values in a number.

The program logic follows these arithmetic steps:

Last Digit Extraction: Uses n % 10 to capture the remainder, which corresponds to the ones column.

First Digit Isolation: Uses repeated integer division (/ 10) to discard the lower digits. For a 4-digit number, dividing by 10 three times leaves only the thousands digit.

Summation: Combines these two isolated values to provide the final result.