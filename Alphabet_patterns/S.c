#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=6; i++){
		for(j=0; j<=7; j++){
			if(i==0 && j!=0){
				printf("*");
			}else if(j==0 && i==0){
				printf(" ");
			}
		}
		if(i==1 || i==2){
			printf("*");
		}
		for(j=0; j<7; j++){
			if(i==1){
				printf(" ");
			}
		}
		if(i==1){
			printf("*");
		}
		for(j=0; j<=7; j++){
			if(i==3 && j!=0){
				printf("*");
			}else if(j==0 && i==3){
				printf(" ");
			}
		}
		for(j=0; j<=7; j++){
			if(i==5 && j==0){
				printf("*");
			}
			else if(i==4 || i==5){
				printf(" ");
			}
		}
		if(i==4 || i==5){
			printf("*");
		}
		for(j=0; j<=7;j++){
			if(i==6 && j==0){
				printf(" ");
			}else if(i==6){
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
