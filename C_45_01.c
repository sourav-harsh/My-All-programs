#include<stdio.h>

int main(){
   int x=0,y=0;
  int num[10];
  printf("Enter data:\n");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&num[i]);
  }
  for(int i=0;i<10;i++)
  {
    if(num[i]%2==0)
    {
      x=x+1;
    }
    else
    {
      y=y+1;
    }
  }
  printf("Total number of ODD numbers: %d\n",y);
  printf("Total number of EVEN numbers: %d\n",x);
    return 0;
}