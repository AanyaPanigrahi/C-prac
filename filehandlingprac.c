#include <stdio.h>
void main(){
	FILE *fp; //Declare file pointer
	// fopen ("file name" , "mode");
	// open a file in read mode
	fp = fopen("FirstPrintFile.txt","r");
//	if(fp!=NULL){
//		printf("HeHeHe\n");
//	}
//	else{
//		printf("BaBye\n");
//	}
    // store the content of the file
    char mystring[100];
    //fgets(buffer_name,buffer_size,file_pointer)
    
    //read the content and store it 
    fgets(mystring,100,fp);
    
    // print the file content
    printf("Manu is a ",mystring);
    
    //close the file
    fclose(fp);
	
}
