#include<stdio.h>
#include<string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int isAvailable;
};

struct Student{
	int id;
	char name[50];	
};

struct Record{
	int stdId;
	int bookId;
	int borrowDate;
	int returnDate;
	int fine;
};

struct Book books[50];
struct Student students[50];
struct Record records[100];

int bookCount = 0;
int studentCount = 0;
int recordCount = 0;

void studentMenu(){
	int ch;
	do{
		printf("\n--- Student Menu ---\n");
		printf("1. Borrow Book\n");
		printf("2. Return Book\n");
		printf("3. Back\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		getchar();
		
		switch(ch){
			case 1:
				borrowBook();
				break;
			case 2:
				returnBook();
				break;
			case 3:
				return;
				break;
			default:
				printf("Invalid choice..\n");
		}
	}while(1);
	
}

void adminMenu(){
	do{
		int ch;
		printf("\n--- Admin Menu ---\n");
		printf("1. Add Book\n");
		printf("2. Update Book Status\n");
		printf("3. View Records\n");
		printf("4. Back\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		getchar();
		
		switch(ch){
			case 1:
				addBook();
				break;
			case 2:
				updateStatus();
				break;
			case 3:
				displayRec();
				break;
			case 4:
				return;
				break;
			default:
				printf("Invalid choice..\n");
		}
	}while(1);
}

void addBook(){
	printf("\nEnter Book ID: ");
	scanf("%d", &books[bookCount].id);
	getchar();
	
	printf("Enter Book Name: ");
	fgets(books[bookCount].name, 50, stdin);
	books[bookCount].name[strcspn(books[bookCount].name, "\n")] = '\0';
	
	printf("Enter Author Name: ");
	fgets(books[bookCount].author, 50, stdin);
	books[bookCount].author[strcspn(books[bookCount].author, "\n")] = '\0';
	
	books[bookCount].isAvailable = 1;
	bookCount++;
	printf("Book Added Successfully!\n");
}

int dateToNum(int d, int m, int y){
	return y*10000 + m*100 + d;
}

void borrowBook(){
	int i, sid, bid, d, m, y;
	if(bookCount != 0){
		printf("\nHere is our available books..\n\n");
		printf("%-7s %-25s %-25s\n", "ID", "Name", "Author");
		
		for(i=0; i<bookCount; i++){
			if(books[i].isAvailable == 1){
				printf("%-7d %-25s %-25s\n", books[i].id, books[i].name, books[i].author);
			}
		}
		
		printf("\nEnter Student ID: ");
    	scanf("%d", &sid);
		printf("Enter Book ID: ");
		scanf("%d", &bid);
		
		for(i=0; i<bookCount; i++){
     		if(books[i].id == bid){
    			printf("Enter Borrow Date (DD MM YYYY): ");
		        scanf("%d %d %d", &d, &m, &y);
		        
		        records[recordCount].bookId = bid;
		        records[recordCount].stdId = sid;
		        records[recordCount].borrowDate = dateToNum(d, m, y);
		        records[recordCount].returnDate = 0;
		        records[recordCount].fine = 0;
		        recordCount++;
		        
		        for(i=0; i<bookCount; i++){
					if(books[i].id == bid){
						books[i].isAvailable = 0;
					}
				}
				printf("Book Borrowed Successfully! Must return within 5 days.\n");    		
        		return;
			}
		}
		printf("\nInvalid Book ID! That book does not exist.\n");
		return;
	}else{
		printf("\nSorry not any book added yet..\n");
	}	
}

void returnBook(){
	int sid, bid, i;
	printf("\nEnter Student ID: ");
	scanf("%d", &sid);
	getchar();
	
	printf("Enter Book ID: ");
	scanf("%d", &bid);
	getchar();
	
	for(i=0; i<recordCount; i++){
		if(records[i].bookId == bid && records[i].stdId == sid && records[i].returnDate == 0){
			int d, m, y, j, fine = 0;
			printf("Enter Today's date (DD MM YYYY): ");
			scanf("%d %d %d", &d, &m, &y);
			getchar();
			
			int bd = records[i].borrowDate % 100;
			int bm = (records[i].borrowDate / 100) % 100;
			int by = records[i].borrowDate / 10000;
			
			int daysInMonth(int month, int year) {
				if (month == 1 || month == 3 || month == 5 || month == 7 ||
					month == 8 || month == 10 || month == 12) return 31;
				if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
				
				if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) return 29;
				return 28;
			}
			
			long totalDaysFor(int day, int month, int year) {
				long total = 0;
				int yy, mm;
				
				for (yy = 1; yy < year; yy++) {
					/* leap year check */
					if ((yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0)) total += 366;
					else total += 365;
				}
				/* add months of the current year */
				for (mm = 1; mm < month; mm++) {
					total += daysInMonth(mm, year);
				}
				/* add days */
				total += day;
				return total;
			}
			
			long totalBorrow = totalDaysFor(bd, bm, by);
			long totalReturn = totalDaysFor(d, m, y);
			int days = (int)(totalReturn - totalBorrow);
			
			if(days < 0){
				printf("Return date is earlier than borrow date! Check the dates.\n");
				return;
			}
			
			if(days > 5){
				fine = (days - 5) * 50;
			}
			
			records[i].fine = fine;
			records[i].returnDate = dateToNum(d, m, y); /* store return date only after validation */
			
			for(j=0; j<bookCount; j++){
				if(books[j].id == bid){
					books[j].isAvailable = 1;
					break;
				}
			}
			printf("Book returned Successfully..\n");
			printf("Total Days: %d | Fine: %d Rupees\n", days, fine);
			return;
		}
	}
	printf("\nRecord not found!\n");
}


void updateStatus(){
	if(bookCount == 0){
		printf("\nNot any book added yet\n");
		return;
	}
	
	int id, i;
	printf("\nAll books:\n");
	printf("%-7s %-25s %-25s %-7s\n", "Id", "Name", "Author", "Availabality");
	for(i=0; i<bookCount; i++){
		printf("%-7d %-25s %-25s %-7d\n", books[i].id, books[i].name, books[i].author, books[i].isAvailable);
	}
	printf("\nEnter Book ID to update status: ");
	scanf("%d", &id);
	for(i=0; i<bookCount; i++){
		if(books[i].id == id){
			printf("Enter new status (1 = available, 0 = borrowed): ");
            scanf("%d", &books[i].isAvailable);
            printf("Status Updated Successfully!\n");
            return;
		}
	}
	printf("Book not found!\n");
}

void displayRec(){
	if(recordCount == 0){
		printf("\nNo records yet.\n");
        return;
	}
	int i;
	printf("\n---- Borrow/Return Records ----\n");
	printf("%-12s %-12s %-10s %-10s %-11s\n", "Book ID", "Student ID", "Borrow date", "Return Date", "Fine");
	for(i=0; i<recordCount; i++){
		int bd = records[i].borrowDate % 100;
		int bm = (records[i].borrowDate / 100) % 100;
		int by = records[i].borrowDate/10000;
		 
		if(records[i].returnDate != 0){
			int rd = records[i].returnDate % 100;
			int rm = (records[i].returnDate / 100) % 100;
			int ry = records[i].returnDate/10000;
			printf("%-12d %-12d %d-%d-%d %d-%d-%d %-10d\n", records[i].bookId, records[i].stdId, bd, bm, by, rd, rm, ry, records[i].fine);	
		}else{
			printf("%-12d %-12d %d-%d-%d  %-10s  %-10d\n", records[i].bookId, records[i].stdId, bd, bm, by, "No Returned", records[i].fine);
		}
	}
}

int main(){
	int ch;
	
	while(1){
		printf("\n===== Library Management System =====\n");
		printf("1. Student\n");
        printf("2. Admin\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);	
        getchar();
        
        switch(ch){
        	case 1:
        		studentMenu();
        		break;
        	case 2:
        		adminMenu();
        		break;
        	case 3:
        		printf("Exiting...\n");
        		return;
        	default:
        		printf("Invalid choice..\n");
		}
	}
	return 0;
}
