#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2lf", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2lf", result);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %.2lf", num1 / num2);
            else
                printf("Error! Division by zero.");
            break;

        default:
            printf("Error! Invalid operator.");
    }

    return 0;
}
