#include<stdio.h>
int main(){
	int i, j;
	
	// control number of rows using outer loop
	for(i=1; i<6; i++){
		
		// print increasing numbers in each row
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		
		// print spaces for pattern alignment
		for(j=i; j<5; j++){
			printf("  ");
		}
		
		// print numbers in reverse pattern part
		for(j=0; j>=1-i ; j--){
			printf("%d", j+i);
		}
		printf("\n");
	}
	return 0;
}
