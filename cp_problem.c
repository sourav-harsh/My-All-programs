#include<stdio.h>
 
int main()
 
{
 
    int t,g,p,n,i,j,k,l,output1=0,output2=0;
 
    scanf("%d",&t); //no of test cases
 
    for(k=0;k<t;k++)
 
    {
 
    scanf("%d%d%d",&g,&p,&n);  //taking input of cost of green and purple ballon and no of participants
 
    for(l=0;l<n;l++)
 
    {
 
        scanf("%d%d",&i,&j); //input of 1st problem , 2nd problem
 
        output1=output1+((i*g)+(j*p)); //total price by 1st operation
 
        output2=output2+((i*p)+(j*g)); //total price by 2nd operation
 
        
 
    }
 
if(output1<output2) //finding minimum of 2 operations
 
     {  printf("%d\n",output1);
 
     }
 
    else
 
     { printf("%d\n",output2);
 
     }  
 
    output1=0;
 
    output2=0;
 
    }
 
    return 0;
 
}