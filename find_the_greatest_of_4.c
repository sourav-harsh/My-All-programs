#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    (a>4)?printf("a is greater than 4"):printf("a is less than 4");
    return 0;
}