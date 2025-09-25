#include<stdio.h>
int main(){
	int i, j;
	
	// control number of rows using outer loop
	for(i=0; i<5; i++){
		
		//print spaces before numbers
		for(j=i; j<4; j++){
			printf("  ");
		}
		
		// print numbers in each row
		for(j=5-i; j<=5; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
