#include <stdio.h>
#include <ctype.h>  // For tolower function

int main() {
    char str[100], ch;
    int counts[26] = {0};  // Array to store counts of each consonant
    int i;

    // Get the input string from the user
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character of the string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert to lowercase to handle case insensitivity
        
        // Check if the character is a consonant
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            counts[ch - 'a']++;  // Increment the corresponding consonant count
        }
    }

    // Display the counts of consonants
    printf("\nConsonant counts:\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && counts[ch - 'a'] > 0) {
            printf("%c: %d\n", ch, counts[ch - 'a']);
        }
    }

    return 0;
}

