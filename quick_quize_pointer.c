#include<stdio.h>

int a=43,b=69;
int *ptr=&a;
int *z=&b;
void add();
void substraction();
void comparison();
void comparis();

int main(){
    printf(" the number to a pointer a %d\n",ptr);
    printf(" the number to a pointer b %d\n",z);
    add();
    substraction();
    comparison();
    comparis();
    return 0;
}
void add(){
    int p,o,l;
    p=ptr;
    o=z;
    l=o+p;
    printf("adding of a number to a pointer %d\n",l);
}
void substraction(){
     int r,k,t;
      k=ptr;
      t=z;
      r=t-k;
      printf("the substraction is %d\n",r);
}
void comparison(){
    int p1,p2;
     p1=(*ptr); //* 10;
     p2=(*z); //* 10;
     if (p1>p2)
     {
        printf("pointer a is greater than pointer b\n");
     }
     else
     {
         printf("pointer b is greater than pointer a\n");
     }
     
     
}
void comparis(){
    int arr[10];
    int *ptr=&arr[0];
    ptr=ptr+2;
    if (ptr==&arr[2])
    {
       printf("These point to the same location in the memory\n");
    }
    else
    {
        printf("These didnt point to the same location in the memory\n");
    }
    
    
}
