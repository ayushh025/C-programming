#include<stdio.h>
int main(){
	float base_sal, hra_per, da_per, ta_per;
	
	//Input base salary
	printf("Enter Base Salary: ");
	scanf("%f", &base_sal);
	
	//Input Percentages
	printf("Enter HRA percentage: ");
	scanf("%f", &hra_per);
	
	printf("Enter DA percentage: ");
	scanf("%f", &da_per);
	
	printf("Enter TA percentage: ");
	scanf("%f", &ta_per);
	
	float hra, da, ta, gross;
	
	hra = (hra_per/100) * base_sal;
	da = (da_per/100) * base_sal;
	ta = (ta_per/100) * base_sal;
	
	//Calculate gross salary
	gross = base_sal + hra + da + ta;
	
	//Display result
	printf("\nBase Salary: %.2f \n", base_sal);
	printf("HRA: %.2f \n", hra);
	printf("DA: %.2f \n", da);
	printf("-------------------------------- \n");
	printf("Gross Salary: %.2f", gross);
}
