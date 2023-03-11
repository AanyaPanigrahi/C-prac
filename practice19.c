#include <stdio.h>

int main(){
	int x=55,y=10;
//	 int max;
	int max=x>y?x++:y++;
//	if(x>y)
//	   max = x++;
//	else
//       max = y++;
	printf("\n%d\t%d\t%d",x,y,max);
	return (0); // 56, 10, 55
}
