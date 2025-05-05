# Complex Numbers Example

This directory contains an example program that demonstrates operations on complex numbers. The program allows users to input complex numbers and perform various arithmetic operations such as addition.

## Files

- **complex_numbers.c**: This file contains the implementation of the complex number operations. It includes functions for adding complex numbers and a main function that handles user input and displays the results.

## How to Use

1. **Compile the Program**: Use a C compiler to compile the `complex_numbers.c` file. For example:
   ```
   gcc complex_numbers.c -o complex_numbers
   ```

2. **Run the Program**: Execute the compiled program:
   ```
   ./complex_numbers
   ```

3. **Input Complex Numbers**: Follow the prompts to enter the real and imaginary parts of the complex numbers you wish to operate on.

4. **View Results**: The program will display the results of the operations performed on the complex numbers.

## Example

```
Enter the real part of the first complex number: 3
Enter the imaginary part of the first complex number: 4
Enter the real part of the second complex number: 1
Enter the imaginary part of the second complex number: 2

The sum of (3 + 4i) and (1 + 2i) is (4 + 6i).
```

## Functions

- **add_complex**: A function that takes two complex numbers as input and returns their sum.
- **main**: The entry point of the program that manages user interactions and displays results.

This example serves as a basic introduction to working with complex numbers in C.