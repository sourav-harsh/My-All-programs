#include<stdio.h>
#include<math.h>
void primeFactors(int x);
int main(){
     int n,j,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        
        j=(n%i);
     if (j==0)
        {
           printf("[%d]  ",(n/i));
        }
       else{}
    }
    primeFactors(n);
    printf("\n");
    return 0;
}
void primeFactors(int n) 
{
    if (n%2 == 0) 
    { 
        printf("\nPrime Factors of %d are = [%d] ",n, 2); 
        n = n/2; 
    } 
    
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        // n = n/i;
        if (n%i == 0) 
        { 
            n = n/i;
            printf("[%d] ",i); 
            
        } 
        else
        {
            n = n/i;
            printf("[%d]",n);
        }
        
    } 
}