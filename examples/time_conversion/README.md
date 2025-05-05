# Time Conversion Program

This program allows users to convert time from hours, minutes, and seconds into total seconds. It prompts the user to enter the time in the format of hours, minutes, and seconds, and then calculates the equivalent total time in seconds.

## How to Use

1. Compile the `time_conversion.c` file using a C compiler.
2. Run the compiled program.
3. When prompted, enter the time in the format of hours, minutes, and seconds.
4. The program will display the total time in seconds.

## Example

```
Enter time to be converted: hour, minutes, seconds:
2 30 15
Time is: 9015 seconds.
```

## Code Explanation

- The program defines a function that takes hours, minutes, and seconds as input.
- It calculates the total seconds using the formula: 
  ```
  total_seconds = (hours * 3600) + (minutes * 60) + seconds
  ```
- The result is printed to the console.

## Notes

- Ensure that the input values for hours, minutes, and seconds are valid integers.
- The program does not handle negative values or invalid input formats.