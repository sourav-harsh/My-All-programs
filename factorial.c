#include<stdio.h>

 int factorial(int x);
 int f;
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("Factorial of %d is %d\n",a,factorial(a));
   
    return 0;
} 
    int factorial(int x){
     if(x==0||x==1)
        return 1;
        else
        {
            f = x*factorial(x-1);
            return f;
        }
}
   
    