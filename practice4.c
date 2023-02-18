#include <stdio.h>
int main(){

	int a;
	printf("enter the number : ");
	scanf("%d",&a);
  	if(a%2==0)
  	{
  		printf("Even number");
  	}
	else
	{
		printf("Odd number");
	}
	
// if(exp) test -> true/false
// {
// statement(s)
// }
// else(exp)
// {
// statement(s)
// }
 
// solving by ternary
// a%2==0?printf("even number"):printf("odd number");

    int b;
    printf("\nenter second here : ");
    scanf("%d",&b);
   ((b>=0)&&(b%2==0))?printf("welcome"):printf("bye");
   
    int c;
    printf("\nenter third number : ");
    scanf("%d",&c);
    ((c & (c-1))) == 0 ? printf("power of 2"): printf("not a power of 2");

//  print your name without semi colon ';'
    if (printf("\naanya"))
    {
    
	}
	
   return 0;
}
