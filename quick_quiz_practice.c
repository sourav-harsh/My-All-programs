#include<stdio.h>

int main(){
    int i,n=0;
    printf("Enter the value of i\n");
    scanf("%d", &i);
    do
    {
        printf("The value is %d\n", n);
        n++;
    } while (n<=i);
    
    return 0;
}