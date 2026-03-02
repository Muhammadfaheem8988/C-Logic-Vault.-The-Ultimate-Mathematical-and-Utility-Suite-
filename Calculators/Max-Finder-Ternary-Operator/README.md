This program finds the largest of three integers using the C Ternary Operator (? :). This approach condenses the nested if-else logic into a single assignment statement, making the code more concise and often faster to read for experienced developers.

The logic works as follows:

Condition 1: Compares first_number and second_number.

True Path: If the first is larger, it moves to a second ternary check between the first and the third.

False Path: If the second is larger, it moves to a second ternary check between the second and the third.

Assignment: The final "winner" is assigned to largest_number in one step.