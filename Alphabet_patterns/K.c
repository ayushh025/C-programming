#include<stdio.h>
int main(){
	int i, j;
	for(i=0;i<=6;i++){
		printf(" *");
		for(j=i;j<=2;j++){
			if(i==0 || i==1 || i==2){
				printf(" ");
			}
		}
		for(j=0;j<=i-4;j++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	
	return 0;
}
