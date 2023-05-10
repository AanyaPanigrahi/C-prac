#include<stdio.h>
int main(){
    // increment operator
    // i = i + 1 or i += 1 or i++
    
    // i++ post increment
    // ++i pre increment
    
    int i=1;
    int j=0;
    
    printf("%d\n",i++); // 1
    printf("%d\n",i); // 2
    
    printf("%d\n",++j); // 1
    printf("%d\n",j); // 1
    
    // i-- post decrement
    // --i pre decrement
    
    int a=2;
    int b=2;
    
    printf("%d\n",a--); // 2
    printf("%d\n",a); // 1
    
    printf("%d\n",--b); // 1
    printf("%d\n",b); // 1
}
