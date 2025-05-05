# Perfect Number Example

This example demonstrates how to check if a number is a perfect number. A perfect number is a positive integer that is equal to the sum of its proper positive divisors, excluding the number itself.

## How to Use

1. Compile the `perfect_number.c` file using a C compiler. For example:
   ```
   gcc perfect_number.c -o perfect_number
   ```

2. Run the compiled program:
   ```
   ./perfect_number
   ```

3. The program will prompt you to enter a positive integer. Input the number you wish to check.

4. The program will then display whether the number is a perfect number or not.

## Example

```
Enter a number: 6
6 is a perfect number.
```

```
Enter a number: 10
10 is not a perfect number.
```

## Code Explanation

- The program prompts the user for a number.
- It calculates the sum of the proper divisors of the number.
- It compares the sum to the original number to determine if it is perfect.
- The result is displayed to the user.

This example is a simple demonstration of using loops and conditionals in C to solve a mathematical problem.