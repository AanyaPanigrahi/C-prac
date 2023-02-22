// switch(exp) exp value must be a char or int
// case 1, case 2... or case 'A', case 'B'...
// {
//	case <int/char constant>:
//	    statement(s);
//	case <constant>:
//		statement(s);
//	case <constant>:
//		statement(s);
//		break;
// }
// #include <process.h>

//  ARITHMETIC OPERATOR
//  1.Addition
//  2.Subtraction
//  3.Multiplication
//  4.Division
//  5.Remainder
//  6.Exit
//  enter your choice (1-5) : 

#include <stdio.h>
#include <stdlib.h>
void main(){
	int a,b,choice;
	printf("\nenter first number : ");
	scanf("%d",&a);
	printf("\neneter second number : ");
	scanf("%d",&b);
	printf("\n\n\t\tArithmetic Calculator");
	printf("\n\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Remainder \n6.Exit");;
	
	printf("\n\nenter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nAddition = %d",a+b);
			break;
		case 2:
			printf("\nSubtraction = %d",a-b);
			break;
		case 3:
			printf("\nMultiplication = %d",a*b);
			break;
		case 4:
			printf("\nDivision = %d",a/b);
			break;
		case 5:
			printf("\nRemainder = %d",a%b);
			break;
		case 6:
			break;
		default:
			printf("\nWRONG INPUT");
    }
}
