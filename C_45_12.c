#include <stdio.h>
int main()
{
    int a,b,c;
    int x,y;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
      if(b%2 != 0)
      {
        x=b;
        printf("%d\n",x);
      }
      for(c=1;c<=a;c++)
      {
        if(c%2 != 0)
        {
          y=c;
        }
        if(x+y==a)
        {
          break;
        }
      }
        printf("%d + %d = %d\n",x,y,x+y);
    }
    return 0;
}