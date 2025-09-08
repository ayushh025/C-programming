#include<stdio.h>
int main(){
	float cels, fahr;
	printf("The Temperature in Celsius: "); 
	
	//Read input and strore it 	
	scanf("%f", &cels);		
	
	//covert the celsius into fahrenheit													
	fahr = (9.0/5.0 * cels) + 32; 	
	
	//Print the result						
	printf("The Temperature in Fahrenheit: %.2f \n", fahr);	
	return 0;
}
