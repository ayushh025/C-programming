#include <stdio.h>

int main() {
    int i, j, n = 5; // Size of the pattern
    int start = 10; // Starting number for the first row

    // Outer loop for each row
    for (i = 0; i < n; i++) {
        // First inner loop for printing spaces (underscores)
        for (j = 0; j < i; j++) {
            printf("  ");  // Two spaces for each "_"
        }

        // Second inner loop for printing numbers
        for (j = start - i; j >= 6; j--) {
            printf("%d ", j);  // Print the number and a space
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

