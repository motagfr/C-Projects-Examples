#include <stdio.h>
#include <stdlib.h>

// Function prototypes for each example
void factorial_example();
void binary_search_example();
void bubble_sort_example();
void address_book_example();
void clock_simulation_example();
void complex_numbers_example();
void string_operations_example();
void swap_integers_example();
void perfect_number_example();
void grade_analysis_example();
void time_conversion_example();

int main() {
    int choice;

    while (1) {
        printf("Select an example to run:\n");
        printf("1. Factorial\n");
        printf("2. Binary Search\n");
        printf("3. Bubble Sort\n");
        printf("4. Address Book\n");
        printf("5. Clock Simulation\n");
        printf("6. Complex Numbers\n");
        printf("7. String Operations\n");
        printf("8. Swap Integers\n");
        printf("9. Perfect Number\n");
        printf("10. Grade Analysis\n");
        printf("11. Time Conversion\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                factorial_example();
                break;
            case 2:
                binary_search_example();
                break;
            case 3:
                bubble_sort_example();
                break;
            case 4:
                address_book_example();
                break;
            case 5:
                clock_simulation_example();
                break;
            case 6:
                complex_numbers_example();
                break;
            case 7:
                string_operations_example();
                break;
            case 8:
                swap_integers_example();
                break;
            case 9:
                perfect_number_example();
                break;
            case 10:
                grade_analysis_example();
                break;
            case 11:
                time_conversion_example();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function implementations for each example
void factorial_example() {
    // Call the factorial example function
}

void binary_search_example() {
    // Call the binary search example function
}

void bubble_sort_example() {
    // Call the bubble sort example function
}

void address_book_example() {
    // Call the address book example function
}

void clock_simulation_example() {
    // Call the clock simulation example function
}

void complex_numbers_example() {
    // Call the complex numbers example function
}

void string_operations_example() {
    // Call the string operations example function
}

void swap_integers_example() {
    // Call the swap integers example function
}

void perfect_number_example() {
    // Call the perfect number example function
}

void grade_analysis_example() {
    // Call the grade analysis example function
}

void time_conversion_example() {
    // Call the time conversion example function
}