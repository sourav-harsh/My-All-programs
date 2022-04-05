#include<stdio.h>

int sum(int a,int b);
 int c;
int main(){
   int f;
   int k,l;
    printf("Enter the value of a\n");
   scanf("%d", &k);
    printf("Enter the value of b\n");
   scanf("%d",&l);
    f=sum(k,l);
    printf("The value of sum %d\n",f);
   return 0;
}
  int sum(int a,int b){
     
      
         c=a+b;
         return c;
    }     