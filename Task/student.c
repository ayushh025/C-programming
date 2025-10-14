#include<stdio.h>
#include<string.h>

void addStudent(int rn[100], char snm[100][50], float sp[100]);
void displayStudent(int rn[100], char snm[100][50], float sp[100]);
void searchStudent(int rn[100], char snm[100][50], float sp[100]);
void updateStudent(int rn[100], char snm[100][50], float sp[100]);
void deleteStudent(int rn[100], char snm[100][50], float sp[100]);

int studentCount = 0;

int main(){
	int studentRoll[100];
	char studentName[100][50];	
	float studentPer[100];
	
	int ch;
	while(1){
		printf("1. Add New Student\n");
		printf("2. Display All Student\n");
		printf("3. Search Student\n");
		printf("4. Edit Student Information\n");
		printf("5. Delete Student\n");
		printf("6. Exit\n\n");
		printf("Choose an option [1, 2, 3, 4, 5, 6] :");
		scanf("%d", &ch);
		getchar();
		printf("\n");
		
		switch (ch){
			case 1:
				addStudent(studentRoll, studentName, studentPer);
				break;
			case 2:
				displayStudent(studentRoll, studentName, studentPer);
				break;
			case 3:
				searchStudent(studentRoll, studentName, studentPer);
				break;
			case 4:
				updateStudent(studentRoll, studentName, studentPer);
				break;
			case 5:
				deleteStudent(studentRoll, studentName, studentPer);
				break;
			case 6:
				return 0;
		}	
	}
	return 0;
}

void addStudent(int rn[100], char snm[100][50], float sp[100]){
	int n, i;
	printf("Enter number of students to be added: ");
	scanf("%d", &n);
	getchar();
	for(i=studentCount; i<studentCount+n; i++){
		printf("Student %d:\n", i+1);
		printf("\tEnter Student Roll No.: ");
		scanf("%d", &rn[i]);
		getchar();
		printf("\tEnter Student Name: ");
		fgets(snm[i], 50, stdin);
		snm[i][strcspn(snm[i], "\n")] = '\0';
		printf("\tEnter Student Percentage: ");
		scanf("%f", &sp[i]);
		getchar();
	}
	studentCount += n;
	printf("\nStudent Added Successfully..\n\n");
	
}
void displayStudent(int rn[100], char snm[100][50], float sp[100]){
	int i;
	if(studentCount != 0){
		printf("%-10s %-20s %-10s\n", "Roll No.", "Name", "Persentage");
		for(i=0; i<studentCount; i++){
			printf("%-10d %-20s %-10.2f\n", rn[i], snm[i], sp[i]);
		}
		printf("\n");
	}else{
		printf("Sorry! No Students Added Yet..\n\n");
	}
}
void searchStudent(int rn[100], char snm[100][50], float sp[100]){
	int rno, i;
	if(studentCount!=0){
		printf("Enter Roll no. of Student: ");
		scanf("%d", &rno);
		for(i=0; i<studentCount; i++){
			if(rn[i] == rno){
				printf("\n%-10s %-20s %-10s\n", "Roll No.", "Name", "Percentage");
				printf("%-10d %-20s %-10.2f\n\n", rn[i], snm[i], sp[i]);
			}
		}
	}else{
		printf("Sorry! No Students Added Yet..\n\n");
	}
}
void updateStudent(int rn[100], char snm[100][50], float sp[100]){
	if(studentCount != 0){
		int roll, i;
		char newnm[50];
		float newp;
		printf("Enter roll no. to change indormation: ");	
		scanf("%d", &roll);
		getchar();
		printf("\tEnter Student's new name: ");
		fgets(newnm, 50, stdin);
		newnm[strcspn(newnm, "\n")] = '\0';
		printf("\tEnter Student's new percetage: ");
		scanf("%f", &newp);
		getchar();
		for(i=0; i<studentCount; i++){
			if(rn[i] == roll){
				//snm[i] = newnm;	cannot assign string in C
				strcpy(snm[i], newnm);
				sp[i] = newp;
				printf("%-10s %-20s %-10s\n", "RollNo", "Name", "Percetage");
				printf("%-10d %-20s %-10.2f\n\n",rn[i], snm[i], sp[i]);
				printf("\nStudent Updated Successfully..\n\n");	
				break;
			}
		}
	}else {
		printf("Sorry! No Students Added Yet..\n\n");
	}
}
void deleteStudent(int rn[100], char snm[100][50], float sp[100]){
	if(studentCount != 0){
		int roll, i, j;
		printf("Enter Student Roll no to delete: ");
		scanf("%d", &roll);
		for(i=0; i<studentCount-1; i++){
			if(rn[i] == roll){
				for(j=i; j<studentCount; j++){
					rn[j] = rn[j+1];
					strcpy(snm[j], snm[i+1]);
					sp[j] = sp[j+1];
				}
			}
		}
		studentCount--;
		printf("Student deleted..\n\n");
	}else{
		printf("Sorry! No Students Added Yet..\n\n");
	}
}
