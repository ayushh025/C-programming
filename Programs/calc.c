#include<stdio.h>

// Function to add two numbers
int add(int n1, int n2){
	return n1 + n2;
}

// Function to subtract two numbers
int subtract(int n1, int n2){
	return n1 - n2;
}

// Function to multiply two numbers
int multiply(int n1, int n2){
	return n1 * n2;
}


// Function to divide two numbers
float divide(int n1, int n2){
	if(n2 == 0){
		printf("");
	}
	return (float)n1 / n2;
}

// Function to find modulus
int modulus(int n1, int n2){
	return n1 % n2;
}

int main(){
	int n1, n2;
	char ch;
	do{
		// Display menu
		printf("Press 1 for +\n");
		printf("Press 2 for -\n");	
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %\n");
		printf("Press 0 for the exit\n\n");
		
		// Get user's choice
		printf("Enter your choice: ");
		scanf(" %c", &ch);
		
		// Exit if user presses 0
		if (ch == '0') {
            printf("Exiting the program..\n");
            break;
        }
        
        // If valid operation is selected
		if(ch > '0' && ch < '6'){
			// Get two numbers from user
			printf("Enter the first number: ");
			scanf("%d", &n1);
			printf("Enter the second number: ");
			scanf("%d", &n2);
		
			// Perform operation based on user's choice
			switch(ch){
				case '1':
					printf("Addition of %d and %d is %d\n\n", n1, n2, add(n1, n2));
					break;
				case '2':
					printf("Subtraction of %d and %d is %d\n\n", n1, n2, subtract(n1, n2));
					break;
				case '3':
					printf("Multiplication of %d and %d is %d\n\n", n1, n2, multiply(n1, n2));
					break;
				case '4':
					printf("Division of %d and %d is %.2f\n\n", n1, n2, divide(n1, n2));
					break;
				case '5':
					printf("Modulus of %d and %d is %d\n\n", n1, n2, modulus(n1, n2));
					break;
			}
		}else {
			// Invalid choice
			printf("Invalid choice\n\n");
		}
	} while(1);			// Repeat until user exits
	return 0;
}
