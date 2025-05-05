#include <stdio.h>

#define MAX_GRADES 15

void read_grades(float grades[], int length);
void calculate_statistics(float grades[], int length);

int main() {
    float grades[MAX_GRADES];
    
    printf("Enter %d grades:\n", MAX_GRADES);
    read_grades(grades, MAX_GRADES);
    calculate_statistics(grades, MAX_GRADES);
    
    return 0;
}

void read_grades(float grades[], int length) {
    for (int i = 0; i < length; i++) {
        printf("Grade %d: ", i + 1);
        scanf("%f", &grades[i]);
    }
}

void calculate_statistics(float grades[], int length) {
    float sum = 0.0, max = grades[0];
    for (int i = 0; i < length; i++) {
        sum += grades[i];
        if (grades[i] > max) {
            max = grades[i];
        }
    }
    float average = sum / length;
    
    printf("\nAverage grade: %.2f\n", average);
    printf("Maximum grade: %.2f\n", max);
}