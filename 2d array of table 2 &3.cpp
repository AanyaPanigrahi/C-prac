//creating a 2d array of table 2 and 3

#include <stdio.h>

int main(){
	int table[10][10],j,i,n;
	int p=2;
	for(j = 0; j <10;j++){
	for(i = 0; i<10;i++){
		table[j][i]= p*(i+1);
	}
	p+=1;
}
for(j = 0; j <10;j++){
	for(i = 0; i<10;i++){
		printf(" %d\t",table[j][i]);
	}
	printf("\n");
}
}
