#include <stdio.h>
struct Demo1{
	char ch;
	char ch2;
	int c;
};
union Demo2{
	char ch3;
	char ch4;
	int i;
	int a;
};

void main(){
	struct Demo1 d1;
	union Demo2 d2;
	
	d1.ch='A';
	d1.c=65;
	
	d2.ch3='A';
	d2.i=65;
	
	printf("\n%d",sizeof(d1));
	printf("\n%d",sizeof(d2));
}
