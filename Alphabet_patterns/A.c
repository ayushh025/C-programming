#include<stdio.h>
int main(){
	int i, j;
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			printf(" ");
		}
		printf("*");
		for(j=0;j<=i-1;j++){
			if(i==2){
				printf("*");
			}else{
				printf(" ");
			}
		}
		for(j=0;j<=i-2;j++){
			if(i==2){
				printf("*");
			}else{
				printf(" ");
			}
		}
		if(i!=0){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
