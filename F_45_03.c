#include<stdio.h>

int main(){
    int num[1000],arr[1000];
    int i,j,k,c=0;
    printf("Enter the number of elements to be stored in array: ");
    scanf("%d",&i);
    printf("Enter %d elements in the array:",i);
    printf("\n");
    for ( j = 0; j < i; j++)
    {
       printf("element- %d: ",j);
       scanf("%d",&num[j]);
    }
    for ( k = 0; k < i; k++)
    {
        c=1;
        if (num[k]!= -1)
        {
            for ( j = k+1; j < i; j++)
            {
                if (num[k]== num[j])
                {
                    c++;
                    arr[j]=-1;
                }
                
            }
            arr[k]=c;
        }
        
    }
     printf("unique numbers in the  array :\n");
      for(j=0; j<i; j++)
    {
         if(num[j]!=-1)
        {
        	if(arr[j]==1)
        	printf("%d\n",num[j]);
 
		} 
         
    } 
    
    
    return 0;
}