#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=6; i++){
		for(j=0; j<=6; j++){
			if(i==0 && j==0){
				printf(" ");
			}else if(i==0 && j!=0){
				printf("*");
			}
		}
		for(j=i; j<=6; j++){
			if(i!=0){
				printf(" ");
			}
		}
		printf("*");
		for(j=0;j<=5; j++){
			if(i==6){
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
