#include<stdio.h>

int main(){
    float radius;
    float pi=3.14;
    printf("what is the radius\n");
    scanf("%f", &radius);
    printf("The area of the circle is %f", pi*radius*radius);

    return 0;
}