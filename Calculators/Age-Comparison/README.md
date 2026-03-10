This program compares the ages of three individuals to identify the youngest among them. It serves as a practical example of using Logical AND (&&) operators and relational conditions in C.

The Comparison Logic:

	Compound Conditions: Each if statement checks one person against the other two simultaneously.

	Tie-Handling: By using the <= (less than or equal to) operator, the program can handle scenarios where multiple individuals share the same minimum age.

	Non-Exclusivity: Since separate if blocks are used, if two people share the youngest age, the program will print both names.