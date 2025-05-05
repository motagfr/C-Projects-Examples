# Binary Search Example

This directory contains an implementation of the binary search algorithm in C. The binary search algorithm is a highly efficient method for finding an item from a sorted list of items. It works by repeatedly dividing the portion of the list that could contain the item in half until you've narrowed down the possible locations to just one.

## How to Use

1. **Compile the Program**: 
   To compile the binary search program, navigate to the `binary_search` directory and use the following command:
   ```
   gcc binary_search.c -o binary_search
   ```

2. **Run the Program**: 
   After compiling, run the program using:
   ```
   ./binary_search
   ```

3. **Input Requirements**:
   - The program will prompt you to enter the size of the sorted array.
   - Next, you will be asked to input the elements of the array (make sure they are sorted).
   - Finally, you will need to enter the number you wish to search for in the array.

4. **Output**:
   The program will display the position of the number in the array if it is found. If the number is not found, it will indicate that the number cannot be found.

## Example

```
Enter the size of the array: 5
Enter sorted elements of the array: 1 2 3 4 5
Enter the number to search: 3
Number is found at position: 2
```

## Code Explanation

- The program defines a function `binary_search` that takes a sorted array, its size, and the number to search for as parameters.
- It uses a loop to repeatedly divide the search interval in half.
- If the value of the search key is less than the item in the middle of the interval, the search continues in the lower half.
- Otherwise, it continues in the upper half.
- The process repeats until the value is found or the interval is empty.

## Conclusion

This binary search implementation is a classic example of an efficient searching algorithm. It demonstrates the power of divide-and-conquer strategies in computer science.