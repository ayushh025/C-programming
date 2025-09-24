#include<stdio.h>
int main(){
	int n, count = 0;
	
	//Get number from user
	printf("Enter any number: ");
	scanf("%d", &n);
	
	//Special case: if number is 0, it has 1 digit
	if(n == 0){
		count = 1;
	}
	
	//Count digits by dividing by 10
	while(n != 0){
		n = n/10;
		count++;
	}
	
	//Print the total number of digits
	printf("Total number of digits: %d", count);
	return 0;
}
