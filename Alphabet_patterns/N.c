#include<stdio.h>
int main(){
	int i, j;
	for(i=0;i<=5;i++){
		printf(" *");
		for(j=0;j<=i-2;j++){
			printf(" ");
		}
		if(i!=0){
			printf("*");
		}
		for(j=i;j<4;j++){
			printf(" ");
		}
		if(i!=5){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
