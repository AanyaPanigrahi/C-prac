
// 1. WAP to find the length of a string without using string library functions.
// 2. WAP to reverse a string without using string library functions.
// 3. count number of words in the string.
// 4. search a word in the string.
// 5.count a word present in the string.

#include <stdio.h>
int main(){
	
    char s[] = "This is a sample string";
    int count=0;
    int i;
    int count_space=0;
    
    for (i = 0; s[i] != 0; i++)
    {
    	if(s[i]==' ')
    {
    	count_space++;
	}
	    
	    if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||
		s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
	    {
	    	s[i]='#';
		}
//    	count++;
	}
//    printf("Length of the string is : %d", count);
//    printf("\nNumber of spaces in string is : %d",count_space);
    printf("\n%s",s);
    
    return 0;

}
