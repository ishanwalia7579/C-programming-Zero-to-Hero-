#include <stdio.h>

// Global variable declaration
int globalNumber = 10;

void increment() {
    globalNumber += 5; // Modify the global variable
    printf("Value after increment: %d\n", globalNumber);
}

void decrement() {
    globalNumber -= 3; // Modify the global variable
    printf("Value after decrement: %d\n", globalNumber);
}

int main() {
    printf("Initial value: %d\n", globalNumber);
    increment(); // Call increment function
    decrement(); // Call decrement function
    return 0;
}
