#include <stdio.h>

unsigned long factorial(unsigned long n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    unsigned long number;
    printf("Enter a number to calculate its factorial: ");
    scanf("%lu", &number);
    
    unsigned long result = factorial(number);
    printf("Factorial of %lu is %lu\n", number, result);
    
    return 0;
}