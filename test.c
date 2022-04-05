#include <stdio.h>

int main()
{
    int size=5,i,min,max,even=0,j,counter;
    int a[size];
    printf("enter the numbers : ");
    for(i=0;i<5;i++)
    {
      scanf("%d ",&a[i]);
    }
    min=max=a[0];
    for(i=1; i<5; i++)
    {
         if(min>a[i])
		  min=a[i];
		   if(max<a[i])
		    max=a[i];
    }
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
    for(int i = 0; i < 5; i++)
{
if(a[i] % 2 == 0)
 even++;
}
printf("\n even : %d",even);
printf("\n prime numbers :");

     for(i=0;i<5;i++)

     {

           counter=0;

           for(j=2;j<a[i];j++)

           {
               if(a[i]%j==0)

                 {

                       counter=1;

                       break;

                 }

           }

           if(counter==0)

           {

                 printf("\t %d",a[i]);

           }


}
}