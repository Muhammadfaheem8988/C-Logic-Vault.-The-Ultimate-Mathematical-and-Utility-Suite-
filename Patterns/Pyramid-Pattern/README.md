This program automates the generation of a pyramid pattern using nested loops in C. It utilizes space-padding logic to ensure the stars are centered on the screen, mimicking the visual alignment of manual printf statements.

Logic Breakdown:

    Leading Spaces: The first inner loop prints a decreasing number of spaces as the row number increases, which pushes the stars toward the center.

    Variable Width: Since your manual pattern had a specific progression (not just simple odd numbers), the logic uses conditions to print the exact number of stars per row.

    Base Construction: The final loop creates a solid foundation of 25 stars to complete the structure.