#include <stdio.h>
int main(){
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	if (b!=0)
	printf("sum : %d\ndifference : %d\nmultiplication : %d\ndivision : %d\nremainder : %d",a+b,a-b,a*b,a/b,a%b);
	else
	printf("sum : %d\ndifference : %d\nmultiplication : %d\ndivision : not possible\nremainder : not possible",a+b,a-b,a*b);
	
	return 0;
}
