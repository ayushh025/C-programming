#include<stdio.h>
#include<string.h>

int acccount = 0;

struct accounts{
	char name[100];
	int pin;
	float bal;
	int accNo;
};
int main(){
	printf("---------- XYZ Bank ----------\n");
	char ch;
	struct accounts acc[100];
	do{
		printf("1. Open New Account\n");
		printf("2. Display All Account\n");
		printf("3. Search Account\n");
		printf("4. Deposit Money\n");
		printf("5. Withdraw Money\n");
		printf("6. Check Balance\n");
		printf("7. Edit Account Details\n");
		printf("8. Delete Account\n");
		printf("0. Exit Program\n");
		printf("Choose an Option [0, 1, 2, 3, 4, 5, 6, 7, 8]: ");
		scanf("%c", &ch);
		getchar();
		switch(ch){
			int pin1, pin2, pin3, i, j, accno, k;
			float damm, wamm;
			char nname[100];
			
			case '0':
				printf("Exiting...");
				return 0;
			case '1':
				printf("\nEnter your full name: ");
				fgets(acc[acccount].name, 100, stdin);
				acc[acccount].name[strcspn(acc[acccount].name, "\n")] = '\0';
				
				printf("Enter Initial Balance: ");
				scanf("%f", &acc[acccount].bal);
				getchar();
				
				while(1){
					printf("Set 4 digit pin: ");
					scanf("%d", &pin1);
					getchar();
					if(pin1 > 999 && pin1 <= 9999){
						printf("Re-enter pin: ");
						scanf("%d", &pin2);
						getchar();
						if(pin1 == pin2){
							acc[acccount].pin = pin1;
							printf("Pin set Successfully..\n\n");
							break;
						}else{
							printf("Both Password did't match..\n");
						}	
					}else{
						printf("Please enter 4 digit...\n");
					}
				}
				
				if(acccount == 0){
					acc[acccount].accNo = 1001 + acccount;	
				}else{
					acc[acccount].accNo = acc[acccount-1].accNo + 1;
				}
				
				printf("Account created successfully..\n");
				printf("Rs. %.2f diposited successfully in your account..\n", acc[acccount].bal);
				printf("Your Account No. %d\n\n", acc[acccount].accNo);
				acccount++;
				break;
			case '2':
				if(acccount != 0){
					printf("\n%-30s %-15s %-15s\n" , "Account holder's name", "Account No.", "Balance");
					for(i=0; i<acccount; i++){
						printf("%-30s %-15d %-15.2f\n", acc[i].name, acc[i].accNo, acc[i].bal);				
					}
					printf("\n");
				}else{
					printf("\nSorry! not any account is created..\n\n");
				}
				break;
			case '3':
				if(acccount != 0){
					printf("Enter Your account: ");
					scanf("%d", &accno);
					getchar();
					int found1 = 0;
					for(i=0; i<acccount; i++){
						if(acc[i].accNo == accno){
							found1 = 1;
							printf("\n%-30s %-15s %-15s\n" , "Account holder's name", "Account No.", "Balance");
							printf("%-30s %-15d %-15.2f\n", acc[i].name, acc[i].accNo, acc[i].bal);
						}
					}
					if(!found1){
						printf("\nEnter valid account no.\n\n");
					}else{
						printf("\n");
					}
				}else{
					printf("\nSorry! not any account is created..\n\n");
				}
				break;
			case '4':
				if(acccount != 0){
					printf("Enter your account No. ");
					scanf("%d", &accno);
					getchar();
					int found2 = 0;
					for(i=0; i<acccount; i++){
						if(accno == acc[i].accNo){
							found2 = 1; 
							printf("Enter amount to diposit: ");
							scanf("%f", &damm);
							getchar();
							acc[i].bal += damm;
							printf("Rs. %.2f diposited successfully..\n\n", damm);
						}
					}
					if(!found2){
						printf("Enter valid account no.\n\n");
					}
				}else{
					printf("\nSorry! not any account is created..\n\n");
				}
				break;
			case '5':
				if(acccount != 0){
					printf("Enter your account No. ");
					scanf("%d", &accno);
					getchar();
					int found = 0;
					for(i=0; i<acccount; i++){
						if(accno == acc[i].accNo){
							found = 1;
							printf("Enter amount to withdraw: ");
							scanf("%f", &wamm);
							getchar();
							if(wamm <= acc[i].bal){
								for(j=0; j<3; j++){
									printf("Enter your pin: ");
									scanf("%d", &pin3);
									getchar();
									if(pin3 == acc[i].pin){
										acc[i].bal -= wamm;
										break;	
									}else{
										printf("Wrong pin enter again..\n");
									}	
								}		
								if(j == 3){
									printf("\nYou entered wrong password three times, Sorry!\n");
								}else{
									printf("\nRs. %.2f withdraw successfully..\n\n", wamm);
								}	
							}else{
								printf("Insufficient balance..\n\n");
							}
						}
					}
					if(!found){
						printf("Enter valid account no.\n\n");
					}
				}else{
					printf("\nSorry! not any account is created..\n\n");
				}
				break;
			case '6':
				if(acccount != 0){
					printf("Enter Your account no. : ");
					scanf("%d", &accno);
					getchar();
					int found3 = 0;
					for(i=0; i<acccount; i++){
						if(acc[i].accNo == accno){
							found3 = 1;
							for(j=1; j<4; j++){
								printf("Enter your pin: ");
								scanf("%d", &pin3);
								getchar();
								if(pin3 == acc[i].pin){
									break;
								}else{
									printf("Wrong pin, enter again..\n");
								}
							}
							if(j==4){
								printf("\nYou entered wrong password three times, Sorry!\n");
							}else{
								printf("\nYour balance is Rs. %.2f\n", acc[i].bal);
							}
						}
						printf("\n");
					}
					if(!found3){
						printf("Enter valid account no.\n\n");
					}
				}else{
					printf("\nSorry! not any account is created..\n\n");
				}
				break;
			case '7':
				if(acccount != 0){
					printf("Enter Account no. :");		
					scanf("%d", &accno);
					int found4 = 0;
					for(i=0; i<acccount; i++){
						if(accno == acc[i].accNo){
						found4 = 1;	
							for(j=0; j<3; j++){
								printf("Enter pin:");
								scanf("%d", &pin3);
								getchar();
								
								if(pin3 == acc[i].pin){
									printf("Enter new name:");
									fgets(nname, 100, stdin);	
									nname[strcspn(nname, "\n")] = '\0';
									
									while(1){
										printf("Enter new pin");
										scanf("%d", &pin1);
										getchar();
										printf("Re-enter pin: ");
										scanf("%d", &pin2);
										getchar();
										if(pin1 == pin2){
											acc[i].pin = pin1;
											strcpy(acc[i].name, nname);
											printf("Name and pin changed successfully..\n\n");	
											break;
										}else{
											printf("Pin did't match, Enter again..\n\n");
										}
									}
									break;
								}else{
									printf("Wrong pin, enter again..\n");
								}
							}
							if(j==3){
								printf("\nYou entered wrong password three times, Sorry!\n\n");
							}
						}
					}
					if(!found4){
						printf("Enter valid account no.\n\n");
					}
				}else{
					printf("\nSorry! not any account is created..\n\n");
				}
				break;
			case '8':
				if(acccount != 0){
					printf("Enter account no. :");
					scanf("%d", &accno);
					int found5 = 0;
					for(i=0; i<acccount; i++){
						if(acc[i].accNo == accno){
							found5 = 1;
							for(j=0; j<3; j++){
								printf("Enter pin: ");
								scanf("%d", &pin1);
								getchar();
								if(pin1 == acc[i].pin){
									for(k=i; k<acccount-1; k++){
										acc[k] = acc[k+1];
									}	
									acccount--;	
									printf("\nAccount deleted successfully..\n\n");
									break;
								}else{
									printf("wrong pin, try again..\n");
								}
							}
							if(j==3){
								printf("\nYou entered wrong password three times, Sorry!\n\n");
							}
						}
					}
					if(!found5){
						printf("Enter valid account no.\n\n");
					}
				}else{
					printf("\nSorry! not any account is created..\n\n");
				}
				break;
			default:
				printf("Invalid Choice...\n\n");			
		}
	}while(1);
	return 0;
}
