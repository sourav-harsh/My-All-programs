#include <stdio.h>
int main()
{
  int num;
    printf("Sale Amount\n");
    scanf("%d", &num);
    if(num <= 500)
    {
        printf("Your Commission is Rs. 35\n");
    }
    else if(num <= 2000)
    {
        printf("Your Commission is 10 percent of Sale Amount\n");
    }
    else if(num <= 5000)
    {
        printf("Your Commission is 15 percent of Sale Amount\n");
    }
    else if (num > 5000)
    {
        printf("Your Commission is 20 percent of Sale Amount\n");

    }
    else
    {
    }
    
 return 0;
}