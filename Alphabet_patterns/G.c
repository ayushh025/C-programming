#include<stdio.h>
int main(){
	int i, j;
	for(i=0;i<=7;i++){
		if(i!=0 && i!=7){
			printf("*");
		}else{
			printf(" ");
		}
		for(j=0;j<=5;j++){
			if(i==0 || i==7){
				printf("*");
			}else if(i==4 && (j!=0 && j!=1 & j!=2)){
				printf("*");
			}else{
				printf(" ");
			}
		}
		if(i==1 || i==6 || i==5 || i==4){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
