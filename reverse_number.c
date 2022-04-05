#include <stdio.h>

int main()
{
  // write your code here
  int i,j,k;
  printf("Enter the number\n");
  scanf("%d",&i);
  printf("Reverse:");
  do
  {
       j=i%10;
       printf("%d",j);
       i=i/10;
       //++i;
  } while (i!=0);
  printf("\n");
  return 0;
}