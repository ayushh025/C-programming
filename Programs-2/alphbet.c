#include<stdio.h>
int main(){
	char ch = 'a';
	
	//Loop to print every 4th character until 'z'
	do{
		printf("%c ", ch);
		ch = ch + 4;
	}while(ch <= 'z');
	
	return 0;
}
