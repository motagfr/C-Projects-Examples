#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add_complex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex subtract_complex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

struct Complex multiply_complex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

void display_complex(struct Complex c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    }
}

int main() {
    struct Complex num1, num2, result;
    int choice;

    printf("Enter first complex number (real and imaginary parts): ");
    scanf("%f %f", &num1.real, &num1.imag);
    
    printf("Enter second complex number (real and imaginary parts): ");
    scanf("%f %f", &num2.real, &num2.imag);

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = add_complex(num1, num2);
            printf("Result of addition: ");
            display_complex(result);
            break;
        case 2:
            result = subtract_complex(num1, num2);
            printf("Result of subtraction: ");
            display_complex(result);
            break;
        case 3:
            result = multiply_complex(num1, num2);
            printf("Result of multiplication: ");
            display_complex(result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}