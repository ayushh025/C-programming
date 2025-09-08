#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=6; i++){
		for(j=0; j<=i; j++){
			if(i==0 || i==1 || i==2 || i==3){
				printf(" ");
			}
		}
		for(j=i; j<=6; j++){
			if(i==4 || i==5 || i==6){
				printf(" ");
			}
		}
		printf("*");
		for(j=i; j<=2; j++){
				printf(" ");
		}
		for(j=i; j<=1; j++){
			printf(" ");
		}
		for(j=0;j<=i-4;j++){
			printf(" ");
		}
		for(j=0; j<=i-5; j++){
			printf(" ");
		}
		if(i!=3){
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}
