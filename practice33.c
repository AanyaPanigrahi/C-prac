#include <stdio.h>
int main(){
	int a[]={1,2,3,4,5};
	int i;
	printf("\nPrinting base address of the array:");
	printf("\n%u%u",&a[0],a,&a);
	printf("\nPrinting addresses of all array elements:");
	for (i=0;i<5;i++){
		printf("\n%u",&a[i]);
	}
	return 0;
}
