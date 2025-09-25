#include<stdio.h>
int main(){
	int i, j;
	
	// control number of rows using outer loop
	for(i=0; i<5; i++){
		printf(" *");				// print starting star for each row
		
		// print middle part of pattern(P)
		for(j=0; j<4; j++){
			if(i==0 || i==2){		// stars for first and third ro
				printf("*");
			}else{
				printf(" ");		// spaces for other rows
			}
		}
		if(i==0 || i==1 || i==2){	// print ending star for certain rows
			printf("*");
		}
		printf("\n");
	}
}
