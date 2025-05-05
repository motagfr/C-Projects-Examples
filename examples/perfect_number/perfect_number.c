#include <stdio.h>

int is_perfect(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

int main() {
    int number;
    printf("Enter a number to check if it is a perfect number: ");
    scanf("%d", &number);

    if (is_perfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}