This program generates an inverted right-angled triangle pattern using nested loops. It illustrates the concept of a "dependent loop," where the boundary of the inner loop is determined by the state of the outer loop.

The Pattern Logic:

    Outer Loop Control: The variable i starts at 10 and counts down to 0. This controls the total number of rows.

    Inner Loop Execution: The variable j always starts at 0, but its limit is i. As i decreases with every row, the number of stars printed in that row also decreases.

    Line Formatting: The \n character is placed outside the inner loop but inside the outer loop to ensure each sequence of stars starts on a new line.