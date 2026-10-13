#include <stdio.h>

int main() {
    int copy = 5; // Initialize copy with a value
    int digits = 0; // Initialize digits to zero

    while (copy<10) {
        digits++;
        // You would typically modify 'copy' inside the loop to change the condition
        // For example:
        // copy--;
    }

    printf("Digits: %d\n", digits); // Print the value of digits
    printf("Digits: %d\n", copy); // Print the value of digits

    return 0;
}
