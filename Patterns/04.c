#include<stdio.h>
int main(){
	int i, j;
	
	// control number of rows using outer loop
	for(i=0; i<5; i++){
		
		// print spaces for pattern alignment
		for(j=1; j<=i; j++){
			printf(" ");
		}
		
		// print 1 and 0 in each row
		for(j=1; j<=5-i;j++){
			if(j%2 == 0){
				printf("%d", 0);
			}else{
				printf("%d", 1);
			}
		}
		printf("\n");
	}
	return 0;
}
