//String Basic concepts
/*
String is a sequence of Characters.
String is a character array.

char name[20];
*/

#include <stdio.h>
#include <string.h>
// contains string related operations or functions
void main(){
	char fname[20]="Jethalal";
	char mname[]="Champaklal";
	char *lname="Gada";
	// char result[100];
	printf("%c",lname[0]); // character array
	printf("\n%s\t%s\t%s",fname,mname,lname);
	
	if(strcmp(fname,"Jethalal")==0) //string library attribute
	// strcmp is a string comparison function
	    printf("won");
	else 
	    printf("lost");
	    
	printf("\n%d",strlen(fname));
	//strlen will give size/length of string -> no. of characters
	
	strcat(fname,lname); // will store the result
	printf("\n%s",fname);
	
//	strrev(result);
//	print(result);
}

