#include<stdio.h>

int main(){
    int n, fdig, ldig, temp;
    
    // Input 3-digit number
    printf("Enter 3 digit positive integer: ");
    scanf("%d", &n);
    
    temp = n;

    // Extract last digit
    ldig = n % 10;

    // Extract first digit
    while(temp >= 10){
        temp = temp / 10;
    }
    fdig = temp;

    // Output the sum of first and last digits
    printf("Sum of first digit %d and last digit %d is %d", fdig, ldig, fdig + ldig);
    
    return 0;
}

