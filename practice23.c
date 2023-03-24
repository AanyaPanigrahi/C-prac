/*
1
22
333
4444
*/

#include <stdio.h>

int main(){
	int r,c,n;
	printf("enter the number of lines : ");
	scanf("%d",&n);
	
	for(r=1; r<=n; r++) 
	{
		for(c=1; c<=r ; c++) 
		{
			printf("%d",r); 
		}
		printf("\n"); 
	}
}
