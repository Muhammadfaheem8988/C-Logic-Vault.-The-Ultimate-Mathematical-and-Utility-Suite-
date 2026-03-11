This program generates a right-aligned triangle pattern. Unlike a standard triangle, this requires a "padding" logic using spaces to align the stars against the right margin of the console.

Logic Breakdown:

    Space Calculation: The first inner loop 5 - i ensures that the number of spaces decreases as we move down the rows (4 spaces, then 3, then 2, etc.).

    Star Increment: The second inner loop k <= i ensures that the number of stars increases by one in every row.

    Alignment: By printing the spaces before the stars in the same row, the output is pushed to the right.