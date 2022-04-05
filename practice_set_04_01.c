#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the value of of n\n");
    scanf("%d", &n);
    for ( i = 1; i<=n; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
    return 0;
}