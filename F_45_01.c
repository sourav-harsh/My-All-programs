#include<stdio.h>

int main(){
    int n,min,max,i,j,k,a;
    int Even_count=0,Odd_count=0;
     int count=0;
    printf("Enter the total number of data:");
    scanf("%d",&n);
    int num[1000];
    printf("Enter the data:\n");
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&num[i]);  
    }
     min=max=num[0];
    for ( a = 1; a < n; a++)
    {
       if (min>num[a])
       {
           min=num[a];
       }
       if (max<num[a])
       {
         max=num[a];
       }
    }
    for ( i = 1; i < n; i++)
    {
        if (num[i]%2==0)
        {
            Even_count++;
        }
        else
        Odd_count++;
    }
    printf("Maximum: %d\n",max);
    printf("Minimum: %d\n",min);
    printf("Total number of even number: %d\n",Even_count);
    printf("Prime numbers are: ");
    for ( k = 0; k < n; k++)
    {
           for(j=2;j<num[k];j++)
           {
            if(num[k]%j==0)
             {
                count=1;
                break;
             }
           }
           if(count==0)
        {
             printf("[%d]",num[k]);
        }
    }
    printf("\n");
    return 0;
}