#include <stdio.h>
void main(){

	FILE *fp;
	// open a file in append mode
	fp = fopen("FirstPrintFile.txt","a");
	// write some text to the file
	printf("\nehehhe");
	// close the file
	fclose(fp);
}
	

