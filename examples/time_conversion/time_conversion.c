#include <stdio.h>

void convert_time(void) {
    int hours, minutes, seconds;
    long int total_seconds;

    printf("\nEnter time to be converted (hours, minutes, seconds): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    total_seconds = (long int)(60 * hours + minutes) * 60 + seconds;
    printf("\nTime in seconds: %ld seconds.\n", total_seconds);
}

int main() {
    convert_time();
    return 0;
}