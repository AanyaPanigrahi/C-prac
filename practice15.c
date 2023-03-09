#include <stdio.h>
// Function Declaration
void factorial(int);
void main()
{
	int i,n;
	printf("\nEnter a number = ");
	scanf("%d",&n);
	
	if (n<0)
	printf("\nFactorial of negative number is not defined");
	else
	{
		unsigned long long int fact = 1;
		for (i=2;i<=n;i++)
		{
			fact = fact *i;
		}
		printf("\nFactorial of %d = %d",n,fact);
	}
}
