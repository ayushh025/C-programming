#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=5; i++){
		for(j=0; j<=i; j++){
			printf(" ");
		}
		printf("*");
		for(j=i; j<=3; j++){
			printf(" ");
		}
		for(j=i; j<5;j++){
			printf(" ");
		}
		if(i>=3 && i!=5){
			printf("*");
		}
		for(j=4; j<=i; j++){
			if(i==4 || i==5){
				printf(" ");
			}
		}
		if(i==4){
			printf("*");
		}else if(i==5){
			printf(" *");
		}
		for(j=i; j<=4; j++){
			if(i==0 && j==4){
				printf("*");
			}else{
				printf(" ");
			}
		}
		if(i==1 || i==4){
			printf("*");
		}else if(i==2 || i==3){
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
