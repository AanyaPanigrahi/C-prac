// to find length of string without using library func
// i.e include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char str[100];
    int l= 0;
	
       printf("\n\nFind the length of a string :\n");
       printf("---------------------------------\n"); 	
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
    while(str[l]!='\0')
    {
        l++;
    }
    printf("Length of the string is : %d\n\n", l-1);
}