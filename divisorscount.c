#include <stdio.h>

void countdivisors(int n);

int main(){
    int n;
    printf("enter number limit : ");
    scanf("%d",&n);
    countdivisors(n);
}

void countdivisors(int n){
    for(int m=1;m<=n;m++){
        int count=0;
        for(int i=1; i<=m; i++){
            if(m%i==0){
            count++;
            }
        }
        if(count==9){
            printf("%d\n",m);
            }
    }
}