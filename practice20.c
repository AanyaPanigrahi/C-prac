
/* BitWise Operators

 & -> Logical AND or AND Gate
 | -> Logical OR or OR Gate
 ^ -> Logical XOR or XOR Gate
 << -> Left shift with zero fill
 >> -> Right shift with zero fill
 
 */
 
#include <stdio.h>
int main(){
	int a=8,b=2;
	printf("\n a & b = %d", a&b);
	printf("\n a | b = %d", a|b);
	printf("\n a ^ b = %d", a^b);
	printf("\n a << b = %d", a<<b);
	printf("\n a >> b = %d", a>>b);
	return 0;
}
