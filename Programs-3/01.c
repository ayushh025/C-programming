#include<stdio.h>
int main(){
	int size, i;
	printf("Enter the array's size: ");
	scanf("%d", &size);
	
	int a[size];
	printf("Enter array's elements:\n");
	for(i=0; i<size; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Negative elements from array: ");
	for(i=0; i<size; i++){
		if(a[i] < 0){
			printf("%d  ", a[i]);
		}
	}
	
	return 0;
}
