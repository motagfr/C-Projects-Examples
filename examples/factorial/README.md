# README for Factorial Example

## Overview
This program calculates the factorial of a non-negative integer using a recursive function. The factorial of a number \( n \) (denoted as \( n! \)) is the product of all positive integers less than or equal to \( n \). For example, \( 5! = 5 \times 4 \times 3 \times 2 \times 1 = 120 \).

## How to Use
1. Compile the `factorial.c` file using a C compiler.
2. Run the compiled program.
3. When prompted, enter a non-negative integer.
4. The program will display the factorial of the entered number.

## Example
```
Enter a non-negative integer: 5
Factorial of 5 is: 120
```

## Code Explanation
- The program defines a recursive function `factorial` that takes an integer \( n \) as input.
- If \( n \) is 0, the function returns 1 (as \( 0! = 1 \)).
- For any other positive integer \( n \), the function calls itself with \( n-1 \) and multiplies the result by \( n \).
- The main function handles user input and output.

## Compilation
To compile the program, use the following command:
```
gcc factorial.c -o factorial
```

## Execution
To run the program, use:
```
./factorial
```

## Notes
- Ensure that the input is a non-negative integer to avoid incorrect results or errors.
- The program may not handle very large integers due to limitations in data types.