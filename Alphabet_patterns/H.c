#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=6; i++){
		printf(" *");
		for(j=0; j<5; j++){
			if(i==3){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("*");
		printf("\n");
	}
	return 0;
}
