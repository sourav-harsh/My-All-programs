#include<stdio.h>

int main(){
    int f,j,i;
    printf("Enter the number\n");
    scanf("%d",&f);
    for ( i = 1; i <= f; i++)
    {
        j=(f%i);
     if (j==0)
        {
            printf("Factors of %d are %d\n",f,(f/i));
        }
        else{}
    }
      
    return 0;
}