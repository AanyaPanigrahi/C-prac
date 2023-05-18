//insertion //bubblesort //delete an element
#include <stdio.h>


//int main(){
//	int i,n,p ,arr[10];
//	for(i = 0; i<10;i++){
//		printf("\nEnter element arr[%d]",i);
//		scanf("%d",&arr[i]);
//	}
//	printf("\nYour inputed array is like this");
//	for(i = 0; i<10;i++){
//		printf("%d \t",arr[i]);
//	}
//	printf("\nEnter your number and its position wher you want to insert it");
//	scanf("%d %d",&n,&p);
//	if (p > 10){
//		printf("invalid position");
//	}else{
//	for(i = 0; i<(p-1);i++){
//		arr[i]=arr[i+1];
//	}
//		arr[p-1]= n;   //be carefull in writing this
//	printf("\nAfter insertion we get this array ");
//	
//	for(i = 0; i<10;i++){
//		printf("%d \t",arr[i]);
//	}
//	}
//}


//***************************************************************************bubble sort*******************************************************************************

//int main(){
//	int i,j,n,p ,arr[10];
//	for(i = 0; i<10;i++){
//		printf("\nEnter element arr[%d]",i);
//		scanf("%d",&arr[i]);
//	}
//	printf("\nYour inputed array is like this");
//	for(i = 0; i<10;i++){
//		printf("%d \t",arr[i]);
//	}
//	for(j = 0; j<10;j++){
//		for(i = 0; i<10;i++){
//			if (arr[i]> arr[i+1]){
//			int temp = arr[i+1];
//			arr[i+1]=arr[i];
//			arr[i]=temp; }
//		}
//	}
//	printf("Ascending order of the array you inputed-->");
//	for(i = 0; i<10;i++){
//		printf("%d \t",arr[i]);
//	}	
//}

//*******************************************************deleting an element**********************************************************************************


int main(){
	int i,j,n,p ,arr[10];
	for(i = 0; i<10;i++){
		printf("\nEnter element arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("\nYour inputed array is like this");
	for(i = 0; i<10;i++){
		printf("%d \t",arr[i]);
	}
	printf("\nEnter the position of element you want to element");
	scanf("%d",&n);
	if (n > 10){
		printf("\ninvalid position");
	}else{
	for(i = n-1; i<10
	;i++){
		arr[i]=arr[i+1];
	}
	printf("\nAfter deletion-->");
	for(i = 0; i<9;i++){
		printf("%d \t",arr[i]);
	}
}
}
	



