#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	printf("enter a num : ");
	scanf("%d",&a);
//	printf("value of a is %d",a);
	
//	if(a>=0)
//	{
//		printf("positive");
//	}
//	else{
//		printf("negative");
//	}

    if(a>=0)
        printf("positive");
    else
        printf("negative");
//  we can also write the code without curly braces but statement should be clear
//  if(a>=0); -> ';' refers to and

//  if (a>=0);
//      printf("hey");
//      printf("\nbye"); -> prints both hey \n bye
//   if same code is written with if(a>=0) and no colon it will be error

    if(a%2==0)
        printf("\neven");
    else
        printf("\nodd");

//  if(a)
//  {
//    printf("filled");
//	}
//  a non zero value is always true
//  whereas 0 is false

}
