#include<stdio.h>
void main(){

	FILE *fp;
	// open a file in write mode
	fp = fopen("FirstPrintFile.txt","w");
	// write some text to the file
	printf("\nKya bolte vaai");
	// close the file
	fclose(fp);
}
