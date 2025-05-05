# Swap Integers Example

This example demonstrates how to swap two integers using pointers in C. The program prompts the user to enter two integers and then swaps their values using a function.

## How to Use

1. Compile the `swap_integers.c` file using a C compiler.
2. Run the compiled program.
3. Follow the prompts to enter two integers.
4. The program will display the values before and after the swap.

## Example

```
Enter first integer: 5
Enter second integer: 10
Before swap: a = 5, b = 10
After swap: a = 10, b = 5
```

## Code Explanation

- The program defines a function `swap_integers` that takes two integer pointers as arguments.
- Inside the function, a temporary variable is used to hold one of the values during the swap.
- The `main` function handles user input and calls the `swap_integers` function to perform the swap.

## Compilation

To compile the program, use the following command:

```
gcc swap_integers.c -o swap_integers
```

## Running the Program

After compilation, run the program with:

```
./swap_integers
```

This will execute the program and allow you to swap integers as described.