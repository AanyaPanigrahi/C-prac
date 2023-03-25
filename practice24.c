/*
   ARRAYs in C
-> combination or collection of same data type variables
-> entity in dbms, structure in C, class in python or java
-> homogenous and continuous memory location
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
//	declaring and initialising arrays
//  1. ARRAY Declaration
//  [] Subscript Operator
//  data_type <identifier>[size];
    int Arr[5]; // arr[0], arr[1], arr[2].. likewise
//  Lower Bound (LB) = 0 Upper Bound (UB) = Size - 1

//  2.Assign values to Array elements declaration
//  three ways possible
//  first method:
    int arr1[5]={10,20,30,40,50};
    int i;
    for (i=0;i<5;i++)
    {
    	printf("arr1[%d] = %d\n",i,arr1[i]);
	}
//  printf("arr1[0] = %d\n",arr1[0]); // 10
//  printf("arr1[1] = %d\n",arr1[1]); // 20
//  printf("arr1[2] = %d\n",arr1[2]); // 30
//  printf("arr1[3] = %d\n",arr1[3]); // 40

//  second method:
    int arr2[5];
    arr2[0]=11;
    arr2[1]=12;
    arr2[2]=13;
    arr2[3]=14;
    arr2[4]=15;
    for (i=0;i<5;i++)
    {
    	printf("\narr2[%d] = %d",i,arr2[i]);
	}
    
//  third method: input method
//    int arr3[5];
//	for (i=0;i<5;i++)
//	{
//		printf("\n\nEnter Element[%d] = ",i+1);
//		scanf("%d",&Arr[i]);
//		printf("\narr3[%d] = %d",i,arr3[i]);
//	}
}
