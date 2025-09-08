#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=5; i++){
		for(j=0; j<=i; j++){
			printf(" ");
		}
		printf("*");
		for(j=i; j<=4; j++){
			printf(" ");
		}
		for(j=i; j<=3; j++){
			printf(" ");
		}
		if(i!=5){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
