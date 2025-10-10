#include <stdio.h>

int main() {
    char str[100];            // Declare a character array (string)
    char *ptr = &str;         // Declare a pointer to char
    int length = 0;           // Initialize length

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // Read string from user input

    while (*ptr != '\0') {    // Loop until null character is found			
        if(*ptr != '\n'){
        	length++;
		}
        ptr++;
    }
    printf("Length of the string = %d\n", length);

    return 0;
}

