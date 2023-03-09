// global and local variables

#include <stdio.h>
int x=7; // global variable
int main(){
//	int a=5; // local variable
//	printf("a=%d\n",a);
//	printf("x=%d",x);
//	return 0;
// gloabal variable are defined before int statement

// swapping
int a,b,temp; // define variables
// take input from user
printf("enter first number = ");
scanf("%d",&a); // 5
printf("enter second number = ");
scanf("%d",&b); // 10

printf("\nbefore swapping\n");
printf("\na=%d\tb=%d\n",a,b);

temp = b; // 5
b = a; // 10
a = temp; // 5

printf("\nafter swapping\n");
printf("\na=%d\tb=%d",a,b);

}
