#include<stdio.h>
int main(){
	float firstAng, secondAng;
	
	//Input two angles
	printf("Enter the First Angle of Triangle: ");
	scanf("%f", &firstAng);
	
	printf("Enter the Second Angle of Triangle: ");
	scanf("%f", &secondAng);
	
	//Calculate third angle
	float thirdAng = 180 - (firstAng + secondAng);
	
	//Output result
	printf("The third angle of the triangle is %.2f degrees", thirdAng);
	
	return 0;
}
