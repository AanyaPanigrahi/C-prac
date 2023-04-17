#include <stdio.h>

struct Demo{
    int ch;
    double we;
    char w;
};

union Demo2
{
    int ch;
    int ch1;
    char w;
};


int main(){
    struct Demo d1;
    union Demo2 d2;
    
    printf("\n%d\n", sizeof(d1));
    printf("\n%d\n", sizeof(d2));

    return 0;
}
