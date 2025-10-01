#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, palindrome = 1;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline and find length
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        len++;
    }

    // Palindrome check
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    // Output result
    if (palindrome) {
        printf("\nThe given string is a Palindrome\n");
    } else {
        printf("\nThe given string is not a Palindrome\n");
    }

    return 0;
}

