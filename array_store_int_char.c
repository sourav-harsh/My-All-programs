#include<stdio.h>

int main(){
    char arr[40];
    printf("enter your name:");
    scanf("%[A-Z, a-z, 0-9 , -]",arr);
    printf("your name is %s \n", arr);
    return 0;
}