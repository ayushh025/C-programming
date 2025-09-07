#include<stdio.h>
int main(){
	int i, j;
	for(i=0;i<=6;i++){
		for(j=0;j<=8;j++){
			if(i==0){
				printf("*");
			}else{
				if(j==4 && i!=6){
					printf("*");
				}else if(i==6 && (j==1 || j==2 || j==3)){
					printf("*");
				}else if(i==5 && j==0){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
