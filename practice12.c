// Input Output format functions

#include <stdio.h>
int main(){
	
	/*
	char name[20]; // 20 -> size (how many char values to store)
	printf("Best of Luck");
	puts("\nBye");
	putchar('D');
	in C char array and string both are same unlike c++
	*/
	
	char name[20];
	printf("Enter your name : ");
	
	// by default it will end with space
	// but we can design it ex: ending it after enter is pressed i.e \n
	
	// scanf("%[^\n]%*c",name); // method 1 modifying CA
	
	gets(name); // method 2 to end at enter
	
	printf("Welcome %s",name);
	
}
