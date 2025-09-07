#include<stdio.h>
int main(){
	int i, j;
	for(i=0;i<=5;i++){
		for(j=0;j<=4;j++){
			if(i==0 || i==5){
				printf("*");
			}else{
				if(j==2){
					printf("*");
				}else{
					printf(" ");	
				}
				
			}
		}
		printf("\n");
	}	
	return 0;
}
