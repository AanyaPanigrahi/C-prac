// C program to calculate no. of digits,alphabets,special characters
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100 

int main()
{
    char str[str_size];
    int alpha, dig, splchar, i;
    alpha = dig = splchar = i = 0;

       printf("Give a string input : ");
       fgets(str, sizeof str, stdin);	


    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            dig++;
        }
        else
        {
            splchar++;
        }
        i++;
    }

    printf("Num of Alphabets in string : %d\n", alpha);
    printf("Num of Digits in string : %d\n", dig);
    printf("Num of Special characters in string : %d\n", splchar);
}