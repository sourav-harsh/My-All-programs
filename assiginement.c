#include <stdio.h>
int main()
{
  int a,b;
  char ch;
  printf("Enter Two Number\n");
  scanf("%d %d",&a,&b);
  printf("Enter the name of operator\n");
  fflush(stdin);
  scanf("%c",&ch);
  if(ch == 'a'||ch =='A')
  printf("Addition of two numbers is = %d\n",a+b);
  else if(ch =='s'|| ch =='S')
  printf("Substraction of two numbers is = %d\n",a-b);
  else if (ch =='p'|| ch =='P')
  printf("Multipliction of two numbers is = %d\n",a*b);
  else if(ch =='d'||ch =='D')
  printf("Division of two numbers is = %d\n",a/b);
  else
  printf("Invalid Input\n");
  return 0;
}