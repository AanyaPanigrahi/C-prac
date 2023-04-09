// Deletion
#include <stdio.h>
int main(){
	int i;
	int size;
	int value;
	int arr[100];
	printf("\nEnter the size of array = ");
	scanf("%d",&size);
	printf("\nElement value = ");
	scanf("%d",&value);
	for(i=0;i<size;i++)
	{
		printf("\nEnter Element[%d] = ",i+1);
	    scanf("%d",&arr[i]);
	}
	

	printf("\nBefore deletion of element in array\n");
	// traversing
	for(i=0;i<size;i++)
	{
		printf("\nElement[%d] = %d",i+1,arr[i]);
	}
	// logic to delete an item from last
	value=arr[size-1];
	size=size-1;
	printf("\nValue %d is deleted from list\n",value);
}
