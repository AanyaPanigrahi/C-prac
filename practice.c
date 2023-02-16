#include <stdio.h>
void main()
{
    int a=5, b=10;
//	int c =  printf("Welcome");
//	printf("\nValue of c = %d",c);
//	printf(" ")?printf("Welcome"):printf("BYE");
//  if space given -> Welcome and if not BYE
//  int  c= a>=b?a:b;
//  int c = ++a;
//  int d = a++;
//  int e = (++a)++;
//  error -> cannot change a constant i.e (6)++ L value req.
//  printf("\nValue of c = %d",c);
//  printf("\nValue of a = %d",a);
//  int c = a>b;
//  int d = a<b;
//  printf("\nValue of b = %d",b);
    int c = a<<2;
//  shifted right
    int d = b>>2;
    int e = a<<2<<2;
//  associativity is L to R when operator are same i.e << else R to L
//  2 is a number and can be further shifted
//  shifted left
    printf("\nValue of c = %d",c);
    printf("\nValue of d = %d",d);
    printf("\nValue of e = %d",e);
}
