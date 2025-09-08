#include<stdio.h>
int main(){
	int i, j;
	for(i=0; i<=6; i++){
		if(i!=0 && i!=6){
			printf(" *");
		}else{
			printf("  ");
		}
		for(j=0; j<=5; j++){
			if(i==0){
				printf("*");
			}else if(i<=4){
				printf(" ");
			}else if(i==6){
				if(i==6 && j==4){
				printf(" ");
				}else{
					printf("*");
				}
			}
		}
		if(i<=4 && (i!=0)){
			printf("*");
		}
		if(i==5){
			for(j=0; j<=3; j++){
				printf(" ");
			}
			printf("* *");
		}
		printf("\n");
	}
	for(i=0;i<=7;i++){
		printf(" ");
	}
	printf("*");
	return 0;
}
