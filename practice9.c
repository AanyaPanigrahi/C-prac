/*
  Pattern Printing Program
Pattern 1:

  *
  **
  ***
  ****
  
  1
  12
  123
  1234
  
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
	int r,c,n;
	printf("enter the number of lines : ");
	scanf("%d",&n);
	
	for(r=1; r<=n; r++) // row control or line control
	{
		for(c=1; c<=r ; c++) // printed value control
		{
			// printf("*"); // -> *,**,***,..
			printf("%d",c); // -> 1,12,123,..
			// printf("%d",r); -> 1,22,333,..
		}
		printf("\n"); // line change
	}

}
