#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=6; i++){
		printf(" *");
		for(j=0; j<=5; j++){
			if(i==0 || i==3){
				printf("*");
			}else if(i==1 || i==2){
				printf(" ");
			}
		}
		if(i==1 || i==2){
			printf("*");
		}
		for(j=2;j<=i;j++){
			if(i>=4){
				printf(" ");
			}
		}
		if(i>=4){
			printf("*");
		}
		printf("\n");
	
	}
	return 0;
}
