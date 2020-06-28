#include<stdio.h>
#include<ctype.h>
#include<string.h>

//A computer program receives a word and a character from user. 
//All characters of the word is turned lowercase using int tolower(int c) function from <ctype.h> library. 
//The character is checked if it is alphabetic using int isalpha(int c) function from <ctype.h> library. 
//If it is not alphabetic, a new character input is requested from user until it is alphabetic. 
//If it is alphabetic, the character is turned lowercase, just in case. 
//The character is searched through the word and turned uppercase at every position it is found. 
//Final state of the word is displayed.

int main(){
	
	char n;
	char noun[15];
	printf("Enter a noun:");
	scanf("%s",noun);
	int size=strlen(noun);
	int i;
	for(i=0;i<size;i++){
		noun[i]=tolower(noun[i]);
	}
	for(i=0;i<size;i++){
		printf("%c",noun[i]);
	}
	printf("\nEnter a character:");
	scanf(" %c",&n);
	while(isalpha(n)==0){
		scanf(" %c",&n);
		if(isalpha(n)!=0){
			break;
		}
	}
	if(isalpha(n)!=0){
		n=tolower(n);
	}
	int j;
	for(j=0;j<size;j++){
		if(noun[j]==n){
			noun[j]=toupper(n);
		}
	}
	for(j=0;j<size;j++){
		printf("%c",noun[j]);
	}
	
	return 0;
}
