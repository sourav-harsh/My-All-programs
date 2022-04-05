#include<stdio.h>

int main(){
    int i;
    for (i=0;i<=100;i++)
    {
        printf("%d\n",i);
        if (i==5)
        {
             printf("the end %d",i );
            break;
           
        }
        
       
    }
    
    return 0;
}