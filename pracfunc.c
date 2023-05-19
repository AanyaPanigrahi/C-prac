#include <stdio.h>

float areaofsquare(float side);
float areaofcircle(float rad);
int main(){
    float sq = areaofsquare(4.0);
    float cr = areaofcircle(3.0);
    printf("area of square is %f and area of circle is %f",sq,cr);
}
float areaofsquare(float side){
    return side*side;
}
float areaofcircle(float rad){
    return 3.14*rad*rad;
}