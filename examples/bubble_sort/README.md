# Bubble Sort Example

This directory contains an implementation of the Bubble Sort algorithm in C. The Bubble Sort algorithm is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## How to Use

1. **Compile the Program**: Use a C compiler to compile the `bubble_sort.c` file. For example, you can use the following command in your terminal:
   ```
   gcc bubble_sort.c -o bubble_sort
   ```

2. **Run the Program**: After compiling, run the executable:
   ```
   ./bubble_sort
   ```

3. **Input**: The program will prompt you to enter the number of elements you want to sort, followed by the elements themselves.

4. **Output**: The sorted list will be displayed after the sorting process is complete.

## Example

```
Enter the number of elements: 5
Enter the elements: 64 34 25 12 22
Sorted array: 12 22 25 34 64
```

## Code Explanation

- The program starts by taking the number of elements and the elements themselves as input from the user.
- It then implements the Bubble Sort algorithm, which involves nested loops to compare and swap elements.
- Finally, it prints the sorted array.

## Notes

- Bubble Sort has a time complexity of O(n^2) in the average and worst cases, making it inefficient on large lists.
- It is primarily used for educational purposes to illustrate the concept of sorting algorithms.