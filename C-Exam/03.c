#include <stdio.h>

// Function to check if a number is divisible by both 3 and 5
int isDivisible(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        return 1;  // Return 1 if divisible by both 3 and 5
    } else {
        return 0;  // Return 0 if not divisible by both
    }
}

int main() {
    int num;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function and check the result
    if (isDivisible(num)) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", num);
    }

    return 0;
}

