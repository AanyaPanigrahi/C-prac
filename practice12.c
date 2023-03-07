// C Program to check if a number is even or not
// using goto function

#include <stdio.h>
int main(){
	int num=11;
	if (num%2==0)
	    goto L1;
	else
	    goto L2;
	L1:
		printf("%d is even", num);
		// return if even
		return;
	L2:
		printf("%d is odd", num);
		// return if odd
		return 0;
	L3:
		printf("Best of Luck");
		return 0;
}
