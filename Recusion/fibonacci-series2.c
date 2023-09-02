

#include <stdio.h>

// Function to calculate the nth Fibonacci number using memoization
int fibonacci(int n, int memo[]) {
    if (n <= 1) {
        return n;
    } else if (memo[n] != -1) {
        return memo[n]; // If result is already computed, return it
    } else {
        memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
        return memo[n];
    }
}

int main() {
    int n = 10; // Calculate the 10th Fibonacci number
    int memo[n + 1]; // Array to store computed Fibonacci numbers
    for (int i = 0; i <= n; i++) {
        memo[i] = -1; // Initialize the memoization array with -1 (indicating not computed)
    }

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n, memo));
    return 0;
}
