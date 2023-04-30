#include <stdio.h>
#include <string.h>
int main()
{
   char s[100]; //string declaration
   printf("Enter a string:");
   gets(s); //input
   strrev(s); //reversing string
   printf("The reverse of the string: %s\n", s);
   return 0;
}


