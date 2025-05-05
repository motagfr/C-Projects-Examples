#include <stdio.h>
#include <string.h>

void reverse_string(char str[]);
void to_uppercase(char str[]);
void to_lowercase(char str[]);
void concatenate_strings(char str1[], char str2[], char result[]);
void find_substring(char str[], char substr[]);

int main() {
    char str[100], str2[100], result[200];
    int choice;

    while (1) {
        printf("\nString Operations Menu:\n");
        printf("1. Reverse a string\n");
        printf("2. Convert to uppercase\n");
        printf("3. Convert to lowercase\n");
        printf("4. Concatenate two strings\n");
        printf("5. Find a substring\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to consume the newline character

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                str[strcspn(str, "\n")] = 0; // remove newline character
                reverse_string(str);
                break;
            case 2:
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                str[strcspn(str, "\n")] = 0; // remove newline character
                to_uppercase(str);
                break;
            case 3:
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                str[strcspn(str, "\n")] = 0; // remove newline character
                to_lowercase(str);
                break;
            case 4:
                printf("Enter first string: ");
                fgets(str, sizeof(str), stdin);
                str[strcspn(str, "\n")] = 0; // remove newline character
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0; // remove newline character
                concatenate_strings(str, str2, result);
                printf("Concatenated string: %s\n", result);
                break;
            case 5:
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                str[strcspn(str, "\n")] = 0; // remove newline character
                printf("Enter substring to find: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0; // remove newline character
                find_substring(str, str2);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void reverse_string(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
}

void to_uppercase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // convert to uppercase
        }
    }
    printf("Uppercase string: %s\n", str);
}

void to_lowercase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; // convert to lowercase
        }
    }
    printf("Lowercase string: %s\n", str);
}

void concatenate_strings(char str1[], char str2[], char result[]) {
    strcpy(result, str1);
    strcat(result, str2);
}

void find_substring(char str[], char substr[]) {
    char *pos = strstr(str, substr);
    if (pos) {
        printf("Substring found at position: %ld\n", pos - str);
    } else {
        printf("Substring not found.\n");
    }
}