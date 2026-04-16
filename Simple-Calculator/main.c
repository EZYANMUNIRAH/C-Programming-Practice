#include <stdio.h>

int main() {
    double num1, num2;
    char symbol;
    char choice;

    do{
    printf("Enter the operation (e.g., 5 + 3): ");
    scanf("%lf %c %lf", &num1, &symbol, &num2);

    //calculation switch case
    switch (symbol) {
        case '+':
        printf("Ans: %.2lf\n", num1 + num2);
        break;
        case '-':
        printf("Ans: %.2lf\n", num1 - num2);
        break;
        case '*':
        printf("Ans: %.2lf\n", num1 * num2);
        break;
        case '/':
        if (num2 != 0) {
            printf("Ans: %.2lf\n", num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
        default:
        printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }
    printf("Do you want to perform another calculation? (y/n): ");
    scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
