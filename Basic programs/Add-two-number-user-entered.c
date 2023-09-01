#include <stdio.h>

int main() {
    double num1, num2, sum;

    // Input from the user
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform the addition
    sum = num1 + num2;

    // Display the result
    printf("Sum: %.2lf\n", sum);

    return 0;
}
