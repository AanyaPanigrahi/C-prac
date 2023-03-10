#include <stdio.h>

int main(){
	int x=5,i;
	for (i = 1; i<x; i++)
	{
		if (i==3)
		{
			break;
		}
		printf("%d",i);
	}
	return 0; // 12 -> break , 123 -> continue
}
