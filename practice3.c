// 1. Take an integer
#include <stdio.h>
int main(){
	
//	int a;
//	printf("enter an integer : \n");
//	scanf("%d",&a);
//	printf("%d",a);
//	return 0;

// with an operator like = it gives 0 as output
// with float input it gives int output

   int e;
   printf("put value : ");
   scanf("%d",&e);
//   printf("value = %d",value);
//   printf(" square = %d",value*value);
//   printf(" cube = %d",value*value*value);
   printf("value = %d\t square = %d\t cube = %d",e,e*e,e*e*e);
   
   printf("\nvalue square cube");
   printf("\n%d     %d     %d",e,e*e,e*e*e);
   
   int a,b;
   printf("\nenter first number : ");
   scanf("%d",&a);
   printf("\nenter second number : ");
   scanf("%d",&b);
   int c=a>b?a:b;
   int d=a<b?a:b;
   printf("\nmax is %d",c);
   printf("\nmin is %d",d);
}
