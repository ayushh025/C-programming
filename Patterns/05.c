#include<stdio.h>
int main(){
	int i, j;
	
	// control number of rows using outer loop
	for(i=0; i<5; i++){
		
		// print spaces for pattern alignment
		for(j=i; j<4; j++){
			printf(" ");
		}
		
		// print increasing numbers
		for(j=5-i; j<=5; j++){
			printf("%d", j);
		}
		
		// print decreasing numbers
		for(j=4; j>=5-i ;j--){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
