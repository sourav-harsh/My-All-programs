#include <stdio.h>

int main(){
     float length,breadth;
    printf("What is the length of rectangle(inches)\n");
    scanf("%f", &length);
    printf("What is the breadth of rectangle(inches)\n");
    scanf("%f", &breadth);

printf("Perimeter of the rectangle is %.1f inches\n",2*(length+breadth));
    printf("The area of your rectangle is %.1f square inches\n", length*breadth);
    return 0;
}