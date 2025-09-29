#include<stdio.h>
int main(){
    int size, i;
    printf("Enter the array's size: ");
    scanf("%d", &size);
    
    int a[size];  // array declaration
    printf("Enter array's elements:\n");
    for(i=0; i<size; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);  // input elements
    }
    
    printf("Negative elements from array: ");
    for(i=0; i<size; i++){
        if(a[i] < 0){        // check negative
            printf("%d  ", a[i]); // print negative
        }
    }
    
    return 0;
}

