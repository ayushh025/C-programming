#include<stdio.h>
int main(){
	int r, c, i, j;
	printf("Enter the array's row size: ");
	scanf("%d", &r);
	
	printf("Enter the array's column size: ");
	scanf("%d", &c);
	
	printf("Enter the array's elements: \n");
	int a[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("The transpose matrix of an array:\n ");
	for(i = 0; i<c; i++){
		printy("%d", a[i][i]);
		printf("\n");
	}
	
	
	return 0;
}
