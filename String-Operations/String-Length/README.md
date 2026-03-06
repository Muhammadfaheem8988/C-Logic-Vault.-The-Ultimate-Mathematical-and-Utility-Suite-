This program demonstrates how to determine the size of a character array (string) using the standard library. In C, strings are terminated by a hidden character called the Null Terminator (\0), and strlen calculates the distance from the start to that character.

Key Technical Details:

String Input: The gets() function allows the program to read a line of text, including spaces, until the user presses Enter.

Length Calculation: strlen() is a built-in function that iterates through the character array and returns the number of bytes before the null character.

Buffer Allocation: The array a[100] allocates space for up to 99 characters plus the terminator.