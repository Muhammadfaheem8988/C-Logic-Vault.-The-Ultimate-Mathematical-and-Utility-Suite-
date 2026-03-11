This program generates a Hollow Diamond by applying conditional logic within the star-printing loop. It demonstrates how to isolate the perimeter of a shape while skipping the internal elements.

Logic Breakdown:

    Boundary Condition: The if(k == 1 || k == i) statement ensures that stars are only rendered at the start and end of the triangle's width for each row.

    Internal Padding: When the loop is between the boundaries, it prints two spaces instead of a star, creating the hollow effect.

    Structural Integrity: The spacing logic (5 - i) remains identical to the solid diamond to ensure the shape maintains its geometric proportions.