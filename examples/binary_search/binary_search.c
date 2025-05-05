#include <stdio.h>

void binary_search(float arr[], int size, float target) {
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            printf("Number is found at position: %d\n", mid + 1);
            return;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("Number can't be found.\n");
}

int main() {
    int size;
    float target;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &size);
    
    float arr[size];
    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%f", &target);

    binary_search(arr, size, target);

    return 0;
}