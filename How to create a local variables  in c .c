#include <stdio.h>

void display() {
    int number = 10; // Local variable
    printf("The local variable value is: %d\n", number);
}

int main() {
    display(); // Calling the function
    return 0;
}
