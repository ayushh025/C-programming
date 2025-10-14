#include <stdio.h>

int main() {
    int n, i;

    // Ask for the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    // Input elements for the first array
    printf("Enter elements for the first array:\n");
    for (i = 0; i < n; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter elements for the second array:\n");
    for (i = 0; i < n; i++) {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    // Use pointers to calculate the sum of the two arrays
    int *ptr1 = &arr1[0], *ptr2 = &arr2[0], *ptr_sum = &sum[0];

    for (i = 0; i < n; i++) {
        *(ptr_sum + i) = *(ptr1 + i) + *(ptr2 + i); // Adding corresponding elements
    }

    // Output the sum array
    printf("Sum of the two arrays is:\n");
    for (i = 0; i < n; i++) {
        printf("sum[%d]: %d\n", i, sum[i]);
    }

    return 0;
}

