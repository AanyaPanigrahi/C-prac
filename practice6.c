// if else ladder
// if(exp1)
// {
//     statement
//  }
// else if(exp2)...

#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b;
	printf("enter percentage : ");
	scanf("%d",&a);
	if(a>=60 && a<=100)
	{
		printf("\nfirst");
	}
	else
	    if(a>=45 && a<60)
	    {
	    	printf("\nsecond");
		}
		else
		    if(a>=33 && a<45)
	        {
	    	    printf("\nthird");
		    }
		    else
		        if(a>=20 && a<33)
		        {
		        	printf("\nfourth");
				}
				else
				{  
				    printf("\nfifth");
				}
		
	// nested if statement		
	printf("\n\nenter a number : ");
	scanf("%d",&b);
	if(b>=0){
		printf("positive");
		if(b%2==0)
		{
			printf("\neven number");
		}
		else
		{
			printf("\nodd number");
		}
	}
	else
	{
		printf("negative");
		if(b%2==0)
		{
			printf("\neven number");
		}
		else
		{
			printf("\nodd number");
		}
	}
	return 0;
	
}
