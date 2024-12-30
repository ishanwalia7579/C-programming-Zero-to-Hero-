#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt user to enter the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum of first n numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
