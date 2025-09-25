#include<stdio.h>
int main(){
	int i, j;
	
	// control number of rows using outer loop
	for(i=0; i<5; i++){
		
		// print numbers from 41 using loop
		for(j=41; j<=i+41; j++){	
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
