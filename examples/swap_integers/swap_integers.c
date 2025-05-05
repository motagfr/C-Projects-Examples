#include <stdio.h>

void swap_integers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap_integers(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}