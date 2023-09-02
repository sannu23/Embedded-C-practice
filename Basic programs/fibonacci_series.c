#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms you want in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    while (n > 0) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
        n--;
    }

    printf("\n");

    return 0;
}
