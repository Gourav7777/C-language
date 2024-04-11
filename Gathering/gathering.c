#include <stdio.h>

float addition(float num1, float num2) {
    return num1 + num2;
}

float subtraction(float num1, float num2) {
    return num1 - num2;
}

float multiplication(float num1, float num2) {
    return num1 * num2;
}

float division(float num1, float num2) {
    if (num2 == 0) {
        printf("Cannot divide by zero\n");
        return 0;
    } else {
        return num1 / num2;
    }
}

float modulus(float num1, float num2) {
    if (num2 == 0) {
        printf("Cannot perform modulus operation with zero\n");
        return 0;
    } else {
        return (int)num1 % (int)num2;
    }
}

void main() {
    int choice;
    float num1, num2;

    while (1) {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
            break;

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                printf("Addition of %.2f and %.2f is %.2f\n", num1, num2, addition(num1, num2));
                break;
            case 2:
                printf("Subtraction of %.2f and %.2f is %.2f\n", num1, num2, subtraction(num1, num2));
                break;
            case 3:
                printf("Multiplication of %.2f and %.2f is %.2f\n", num1, num2, multiplication(num1, num2));
                break;
            case 4:
                printf("Division of %.2f and %.2f is %.2f\n", num1, num2, division(num1, num2));
                break;
            case 5:
                printf("Modulus of %.2f and %.2f is %.2f\n", num1, num2, modulus(num1, num2));
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
        }
    }

}
