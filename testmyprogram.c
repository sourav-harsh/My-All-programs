#include<stdio.h>

int main(){
    int a,b,c=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    do
    {
         b=a%10; 
         c=b+c;
    } while (a<0);
    printf("%d\n",c);
    
    
    return 0;
}