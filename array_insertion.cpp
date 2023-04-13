#include<stdio.h>
void display(int br[], int s);
main()
{
int ar[100],n,posi,num,i;
printf("number of elements:");
scanf("%d", &n);


for(i=0; i<n; i++)
{
	printf("%d Element",i);
scanf("%d", &ar[i]);
}
printf("Position of the number where you want to insert:");
scanf("%d",&posi);
printf("The number you want to insert:");
scanf("%d",&num);
for(i = (n-1);i>=(posi-1);i--)
	ar[i+1]= ar[i];
	ar[posi-1]=num;


display(ar,n);
}

void display(int br[], int s)
{
for(int i=0; i<s; i++)
{
printf("%d ", br[i]);
}
}
