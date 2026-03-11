This program generates an X shape using numbers and dashes. It utilizes coordinate geometry logic within nested loops to determine exactly where to place a digit versus a filler character.

Logic Breakdown:

    Main Diagonal: The condition j == i identifies the path from the top-left to the bottom-right.

    Anti-Diagonal: The condition j == 8 - i identifies the path from the top-right to the bottom-left.

    The Intersection: When both conditions meet (at the middle), a single number is printed.

    Filler Logic: If neither condition is met, the program prints a dash (-) to maintain the grid structure.