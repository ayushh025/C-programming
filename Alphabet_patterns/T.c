#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=5; i++){
		printf(" ");
		for(j=0; j<=6; j++){
				if(i==0){
					printf("*");
				}else if(i!=0 && j==3){
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	return 0;
}
