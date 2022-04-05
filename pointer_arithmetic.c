#include<stdio.h>
void substraction();
int a=43,b=32;
    // int ptr;
     int *ptr = &a;
     int *j = &b;
 
int main(){
  
     printf("the value of a is: %u\n",ptr);
    //   ptr++;
      printf("the  value of b is: %u\n",j);
      substraction();
      
     return 0;
} 
     void substraction(){
      int r,k,t;
      k=ptr;
      t=j;
      r=t-k;
      printf("the substraction is %d\n",r);
    }