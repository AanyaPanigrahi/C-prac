/*
Pattern 2:

  ****
  ***
  **
  *
  
  1234
  123
  12
  1
  
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
	int r,c,n;
	printf("enter the number of lines : ");
	scanf("%d",&n);
	
	for(r=1; r<=n; r++) 
	{
		for(c=n; c>=r ; c--) 
		{
			printf("%d",c); 
		}
		printf("\n"); 
	}

}
