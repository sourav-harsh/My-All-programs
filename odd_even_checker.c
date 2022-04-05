#include<stdio.h>

int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if (a==0)
    {
        printf("Enter number is 0\n");
    }
    else{
    if(a%2==0){
        if (a>0)
        {
            printf("%d is positive even\n", a);
        }
        else{
            printf("%d is negative even\n", a);
        }
    }
    else{
        if (a>0)
        {
        printf("%d is positive odd\n", a);
        }
        else{
          printf("%d is negative odd\n", a); 
        }
        
    }
    }
    return 0;
}