#include <stdio.h>

/*
  Type Casting or Data Type Conversion:
  
  ranking => char -> int -> float -> double (lower to higher)
  
  Changing Data Type
  1) Lower to Higher (char -> float) No Data Loss (Manual -> Explicit)
  2) Higher to Lower (float -> int) Data Loss (Automatic -> Implicit)
  
  Implicit type conversion (Casting) => Automatic => Compiler will perform
  Explicit type conversion => Manual => developer has to write
  
*/

int main(){
	// float res= 5/2; // int result
	float res = (float)5/(float)2;
	int i = 2.5; // Implicit
	printf("%f",res);
	printf("\n%d",i);
	
}
  
