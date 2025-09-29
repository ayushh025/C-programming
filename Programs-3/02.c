#include<stdio.h>
int main(){
    int r, c, i, j;
    printf("Enter the array's row size: ");
    scanf("%d", &r);  // input rows
    
    printf("Enter the array's column size: ");
    scanf("%d", &c);  // input columns
    
    printf("Enter the array's elements: \n");
    int a[r][c];  // declare 2D array 
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);  // input elements
        }
    }
    
    int max = a[0][0];  // assume first element is max
    
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(a[i][j] > max){   // compare elements
                max = a[i][j];   // update max
            }
        }
    }
    
    printf("\nThe largest element is %d", max);  // print result
    
    return 0; 
}


