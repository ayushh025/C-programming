#include<stdio.h>
int main(){
    int r, i, j;
    printf("Enter the array's row & column size: ");
    scanf("%d", &r);  // input size of square matrix

    printf("\nEnter the array's elements: \n");
    int a[r][r]; 	 // declare square matrix
    for(i=0; i<r; i++){
        for(j=0; j<r; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);  // input elements
        }
    }

    printf("\nThe transpose matrix of an array: \n");
    for(i = 0; i<r; i++){
        for(j=0; j<r; j++){
            printf(" %d ", a[j][i]);  // swap row & column
        }
        printf("\n");  
    }

    return 0; 
}
