#include<stdio.h>
int main(){
	int m;
	char grd;
	printf("Enter your score out of 100: ");	// Prompt user for input
	scanf("%d", &m);							// Read score from user
	
	// Validate input range
	if (m < 0 || m > 100) {
        printf("Invalid score entered. Please enter a score between 0 and 100");
    }
	
	
	// Assign grade based on score using ternary operators
	grd = (m >= 85) ? 'A' :
          (m >= 75) ? 'B' :
          (m >= 65) ? 'C' :
          (m >= 55) ? 'D' :
          (m >= 45) ? 'E' : 'F';
	printf("Your grade is %c, ", grd);
	
	
	// Print message based on grade using switch-case
	switch(grd) {
        case 'A':
            printf("Excellent work!");
            break;
        case 'B':
            printf("Welldone! ");
            break;
        case 'C':
            printf("Goodjob! ");
            break;
        case 'D':
            printf("You Passed! ");
            break;
        case 'E':
            printf("You Passed but you could do better! ");
            break;
        case 'F':
            printf("Sorry You failed! ");
            break;
	}
	
	// Check eligibility for next level
	if(grd != 'F'){
		printf("You are eligible for next level");
	}else{
		printf("Please try again next time");
	}
	
	return 0;
}
