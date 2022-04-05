#include<stdio.h>

int main(){
    int n,i,j=0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for ( i=1;i<=n; i++)
    {
        printf("%d",i);
    }
    for (i=1;i<=n;i++)
    {
        j=(j+i);
    }
     printf("\nThe Sum of Natural Number upto %d terms : %d\n",n,j);
     printf("The Average of Natural Number upto %d terms : %d\n",n,(j/n));
   
    return 0;
}