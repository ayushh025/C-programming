#include<stdio.h>
int main(){
	int i, n;
	printf("Enter any number:");
	scanf("%d", &n);
	
	//find last digit
	int lastdig = n % 10;
	
	//find first digit
	int temp = n;
	while(temp >= 10){			
		temp = n/10;		
	}
	
	printf("Sum of first digit and last digit is %d", temp+lastdig);
	
	return 0;
}
