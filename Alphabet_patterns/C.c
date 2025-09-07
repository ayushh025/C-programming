#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=7; i++){
		if(i==0 || i==7){
			printf(" ");
		}else{
			printf("*");
		}
		for(j=0;j<=5;j++){
			if(i==0 || i==7){
				printf("*");
			}else{
				printf(" ");
			}
		}
		if(i==1 || i==6){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
