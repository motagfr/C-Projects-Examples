# Clock Simulation

This project simulates a digital clock using C programming. The clock updates and displays the current time continuously in a console window.

## Overview

The `clock_simulation.c` file contains the main logic for the clock simulation. It utilizes a simple structure to represent time (hours, minutes, and seconds) and updates the time every second. The program runs indefinitely until manually terminated.

## How to Run

1. **Compile the Program**: Use a C compiler to compile the `clock_simulation.c` file. For example, you can use GCC:
   ```
   gcc clock_simulation.c -o clock_simulation
   ```

2. **Execute the Program**: Run the compiled program:
   ```
   ./clock_simulation
   ```

3. **View the Output**: The program will display the current time in the format `HH:MM:SS`. It will update every second.

## Code Explanation

- **Structure Definition**: The program defines a structure `tm` to hold hours, minutes, and seconds.
  
- **Time Update Function**: The `update` function increments the seconds and handles the overflow for minutes and hours.

- **Display Function**: The `display` function outputs the current time to the console.

- **Main Loop**: The main function contains an infinite loop that continuously updates and displays the time.

## Example Output

```
00:00:01
00:00:02
00:00:03
...
```

## Notes

- To stop the program, you can use `Ctrl + C` in the console.
- Ensure your console window is large enough to display the time without wrapping.