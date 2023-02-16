// SPECIAL OPERATORS
#include <stdio.h>
int  main (){

// 1. comma (,) -> used to seperate same datatypes
   int a=5,b=10;
   char ch='q';
// int a=5,char ch='A'; -> wrong (diff datatypes)

// 2. sizeof(value), it is an operator but aslo a keyword
// value = datatype, variable, constant
   printf("size of int = %d",sizeof(int));
   printf("\nsize of char = %d",sizeof(char));
   printf("\nsize of float = %d",sizeof(float));
   printf("\nsize of double = %d",sizeof(double));
   printf("\nsize of 5 = %d",sizeof(5)); // int constant
   printf("\nsize of 'A' = %d",sizeof('A')); // 4
// because char was stored in ASCII value which is int
// datatype should be mentioned above
   printf("\nsize of 'q' = %d",sizeof(ch)); // 1
   printf("\nsize of 4.5 = %d",sizeof(4.5)); // 8 doub.
   printf("\nsize fo 4.5f = %d",sizeof(4.5f)); // 4 float.
   printf("\nsize of 5*2*8 = %d",sizeof(5*2*8)); // 4 int,int,int
// size will be of the higher datatype int,int->int int,float->float etc.
   printf("\nsize of 5*2.0*4 = %d",sizeof(5*2.0*4)); // 8 double
   
// TERNARY OPERATORS
// syntax : expr 1 ? expre 2 : expr 3 ;
// expr 1 -> test -> true/false
// test result -> true -> expr2
// test result -> false -> expr3
   
// PRECEDENCE AND ASSOCIATIVITY
   printf("\n5*4-4*1 = %d",5*4-4*1); // 16
   printf("\n5*4%4-4*1 = %d",5*4%4-4*1); // -4
   printf("\n5%4%4-4*1 = %d",5%4%4-4*1); //-3
//  printf("\n5%4%(4-4)*1 = %d",5%4%(4-4)*1); --> division by zero error
   return 0;
   
}
