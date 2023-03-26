
// min and max in array

#include <stdio.h>
#define SIZE 5

int main(){
	int Arr[SIZE];
	int i, max, min;
	// take values from user
	for (i=0; i<SIZE;i++)
	{
		printf("\nEnter Element[%d] = ",i+1);
		scanf("%d",&Arr[i]);
	}
	max=min=Arr[0];
	// visit each element (traversing)
	// print(Display) array elements(value)
	// 10,3,44,2,55
	for (i=1;i<SIZE;i++)
	{
		if(Arr[i]>max)
		  max=Arr[i];
	}
	
	for (i=1;i<SIZE;i++)
	{
		if(Arr[i]<min)
		  min=Arr[i];
	}
	// print the sum of all elements
	printf("\n max value = %d \n min value = %d",max,min);
	}
