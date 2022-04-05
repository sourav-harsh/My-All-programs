#include<stdio.h>

int main(){
    int i,j,l,k,a;
    int arr[1000];
    printf("Enter the totals number of data:");
    scanf("%d",&i);
    printf("Enter the data\n");
    for ( j = 0; j < i; j++)
    {
        scanf("%d",&arr[j]);
    }
    for (k = 0; k < i; k++)
    {
        for (l = k+1; l < i; l++)
        {
        if (arr[k]>arr[l])
        {
         a=arr[k];
         arr[k]=arr[l];
         arr[l]=a;
        }
        
        }
        
    }
     printf("Sorted data in ascending order: ");
     for (j = 0; j < i; ++j)
     {
      printf("[%d]\t", arr[j]);
      }
      printf("\n");
    
    return 0;
}