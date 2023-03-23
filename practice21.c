#include <stdio.h>
int main(){
	
//	int x,y,z;
//	for (x=0,y=1000;y>1;x++,y/=10)
//	printf("x=%d y=%d\n",x,y);
//	return 0; // 0,1000 -> 1,100 -> 2,10

//    int x=5,i;
//    for (i=0;i<x;i++)
//    {
//    	printf("%d",i);
//    	if(i==3){
//    		goto label;
//		}
//	}
//	label:
//		printf("\njumped to level");
//	return 0;

   int a=2,b;
   b=a-- + a;
   printf("%d",b);
   return 0; // 3
}
