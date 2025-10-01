#include <stdio.h>

int main() {
    char str[100];
    int i, j, count;
    int visited[256] = {0}; // To mark counted characters

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nFrequency of each letter:\n");

    for (i = 0; str[i] != '\0'; i++) {
        // Skip spaces and newline
        if (str[i] == ' ' || str[i] == '\n') {
            continue;
        }

        // Skip already visited characters
        if (visited[i] == 1) {
            continue;
        }

        count = 1;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                visited[j] = 1; // Mark as visited
            }
        }

        printf("%c => %d\n", str[i], count);
    }

    return 0;
}

