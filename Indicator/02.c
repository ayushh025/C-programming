#include <stdio.h>

// UDF to calculate and print cube using pointer
void printCubes(int *arr, int size) {
	int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            int val = *(arr + i * size + j);
            printf("%d ", val * val * val);
        }
        printf("\n");
    }
}

int main() {
    int size, i, j;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];

    // Input elements
    printf("\nEnter array elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Output cubes
    printf("\nCubes of all elements:\n");
    printCubes(&arr[0][0], size);

    return 0;
}

