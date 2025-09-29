#include<stdio.h>
int main(){
    int r, c, i, j, rnum, cnum, rsum = 0, csum = 0;

    // Input matrix size
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    // Input matrix elements
    printf("\nEnter the array's elements: \n");
    int a[r][c];
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input row number, print it and sum it
    printf("\nEnter row number (starts from 0) :");
    scanf("%d", &rnum);
    printf("Elements of row: ");
    for(i=0; i<c; i++){
        printf(" %d ", a[rnum][i]);
        rsum += a[rnum][i];   // accumulate row sum
    }
    printf("\nThe sum of row %d: %d\n", rnum, rsum);

    // Input column number, print it and sum it
    printf("\nEnter column number (starts from 0) :");
    scanf("%d", &cnum);
    printf("Elements of column: ");    
    for(i=0; i<r; i++){
        printf(" %d " , a[i][cnum]);
        csum += a[i][cnum]; 
    }
    printf("\nThe sum of column %d: %d", cnum, csum);

    return 0;
}
