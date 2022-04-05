#include<stdio.h>

int main(){
    int f,j,i,k[100];
    printf("Enter the number\n");
    scanf("%d",&f);
    for ( i = 1; i <= f; i++)
    {
        j=(f%i);
     if (j==0)
        {
            printf("The positive divisor : %d\n",(f/i));
            k[i]=((f/i+1)+(f/i+2));
        }
        else{}
    }
    printf("The sum of the divisor is : %d\n",k[i]);
      if (k[i]==f)
        {
           printf("So, the number is perfect.\n"); 
        }
        else
        {
            printf("So, the number is not perfect.\n");
        }
       return 0;
}