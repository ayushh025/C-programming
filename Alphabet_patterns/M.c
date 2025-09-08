#include<stdio.h>
int main(){
	int i, j;
	for(i=0;i<=5;i++){
		for(j=i;j<=5;j++){
			printf(" ");
		}
		printf("*");
		for(j=0;j<=i-1;j++){
			printf(" ");
		}
		for(j=0;j<=i-2;j++){
			printf(" ");
		}
		if(i==1 || i==2){
			printf("*");
		}else if(i==0){
			printf("");
		}else{
			printf(" ");
		}
		for(j=i+4;j<=5;j++){
			printf(" ");
		}
		if(i==0){
			printf(" *");
		}else if(i==1){
			printf("* *");
		}
		for(j=0;j<=2;j++){
			if(i!=0 && i!=1){
				printf(" ");
			}
		}
		if(i!=0 && i!=1){
				printf("*");
			}
		printf("\n");
	}
	return 0;
}
