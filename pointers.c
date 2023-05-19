#include <stdio.h>
void  work(int a, int b, int *sum , int *diff, int *mul);
int main(){
    int a=2;
    int b=3;
    int sum,diff,mul;
    work(a,b,&sum,&diff,&mul);
    printf("sum %d diff %d mul %d",sum,diff,mul);
    return 0;
}
void work(int a, int b, int *sum, int *diff, int *mul) {
    *sum=a+b;
    *diff=a-b;
    *mul=a*b;
}