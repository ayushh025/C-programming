#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=5; i++){
		printf(" *");
		for(j=0; j<5; j++){
			if(i==5){
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
