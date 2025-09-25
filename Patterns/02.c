#include<stdio.h>
int main(){
	int i, j, n=11;
	
	// control number of rows using outer loop
	for(i=0; i<4; i++){
		
		// print numbers starting from 11 and increment each time
		for(j=0; j<=i; j++){
			printf("%d ", n);
			n++;
		}
		printf("\n");
	}
	return 0;
}
