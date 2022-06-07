// Libraries
#include <stdio.h>
#include <stdbool.h>

int Add(double a, double b) {
    return a + b;
}

int Subtract(double a, double b) {
    return a - b;
}

int Divide(double a, double b) {
    return a / b;
}

int Multiply(double a, double b) {
    return a * b;
}

// Main Funtction
int main() {
    // Declared Nums
    double num1;
    double num2;
    double sum;
    char operator;

    while (true) {
        printf("Please enter first num: ");
        scanf("%lf", &num1);

        printf("Please enter second num: ");
        scanf("%lf", &num2);

        printf("Please enter a operator: ");
        scanf(" %c", &operator);

        if (operator == '+') {
            sum = Add(num1, num2);
            printf("%lf\n", sum);
        } else if (operator == '-') {
            sum = Subtract(num1, num2);
            printf("%lf\n", sum);
        } else if (operator == '/'){
            sum = Divide(num1, num2);
            printf("%lf\n", sum);
        } else if (operator == '*') {
            sum = Multiply(num1, num2);
            printf("%lf\n", sum);
        } else {
            printf("Not a correct operator: Select one of the following: +, -, /, *");
        }
    }

    return 0;    
}
