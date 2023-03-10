#include <stdio.h>

int main() {
    int x=2,y,z; y=2*x++;
    z=3*y++;
    printf("%d,%d,%d",x,y,z);
    // result 3,5,12
    return 0;

}
