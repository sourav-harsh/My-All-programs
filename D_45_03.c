#include <stdio.h>

int getSum(int number)
{
    int sum = 0;
    while (number != 0) {
        sum = sum + number % 10;
        number = number / 10;
    }
    return sum;
}
int read(number)
{
    int Count=0;
 while(number > 0)
  {
     number = number / 10;
     Count = Count + 1;  
  }
  return Count;
}
int re(number){
    int rev = 0, remainder;
    while (number != 0) {
        remainder = number % 10;
        rev = rev * 10 + remainder;
        number /= 10;
    }
    return rev; 
}
int arm(number)
{
    int originalNum, remainder, result = 0;
    originalNum = number;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }
       return result;
}

int main()
{
  int number;
  printf("Enter any number\n");
  scanf("%d", &number);
  printf("Total No. digits = %d\n", read(number));
   printf("Sum of all digits= %d\n", getSum(number));
   printf("Reverse of %d is %d\n",number, re(number));
   if (re(number)==number)
   {
       printf("%d is a Palindrome Number\n",number);
   }
   else
   {
       printf("%d is not a Palindrome Number\n",number);
   }
   if (arm(number)==number)
   {
       printf("%d is an Armstrong number.\n", number);
   }
   else
   {
       printf("%d is not an Armstrong number.\n", number);
   }
   
   
  return 0;
}

