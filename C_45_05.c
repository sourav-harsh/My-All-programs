#include<stdio.h>

int main(){
    int mul[100];
    int k,i,n,j;
    printf("Input upto the table number starting from 1 to n\n");
    scanf("%d %d",&j,&n);
    if (j>=1)
     {
      for (k =j; k <= n;k++)
       {  
         for ( i = 1; i <= 10; i++)
         {
         printf("%d X %d = %d , ",k,i,mul[i]=(k*i));
         }
       }
    }
    else
    {
        printf("You enter a wrong input\n");
    }
    return 0;
}