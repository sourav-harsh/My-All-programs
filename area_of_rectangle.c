#include <stdio.h>

int main(){
     float length,breadth;
    printf("What is the length of rectangle\n");
    scanf("%f", &length);
    printf("What is the breadth of rectangle\n");
    scanf("%f", &breadth);

    printf("The area of your rectangle is %f\n", length*breadth);
    return 0;
}