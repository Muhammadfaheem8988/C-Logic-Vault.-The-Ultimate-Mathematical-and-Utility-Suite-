The Dynamic Population Analyst is a flexible demographic tool that computes literacy and illiteracy rates across gender lines. By allowing user-defined percentages, it can be applied to diverse datasets from different municipalities or census reports.

Logic Architecture:

Variable Input: Accepts the baseline population and three key percentage variables.

Derived Totals: Automatically calculates female population and female literacy by finding the difference from the primary inputs.

Integer Precision: By multiplying the population by the percentage before dividing by 100, the program avoids the truncation issues common with floating-point math in simple integer environments.