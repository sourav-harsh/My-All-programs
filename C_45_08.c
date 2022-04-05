#include<stdio.h>

int main(){
    int i,k=0;
    printf("Input the number :\n");
    scanf("%d",&i);
    printf("The positive divisor :");
    for (int j = 1; j < i; j++)
    {
       if (i%j==0)
    {
       printf("[%d]",j);
       k+=j;
    }
    }
    printf("\nThe sum of the divisor is :[%d]",k);
    if (k==i)
    {
      printf("\nSo, the number is perfect.");
    }
    else
    {
        printf("\nSo, the number is not perfect.");
    }
    printf("\n");
    
    return 0;
}