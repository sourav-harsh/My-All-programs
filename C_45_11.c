#include<stdio.h>

void HCF(int x,int y);
int main(){
    int i,j;
    printf("Input 1st number for HCF:\n");
    scanf("%d",&i);
    printf("Input 2nd number for HCF:\n");
    scanf("%d",&j);
     HCF(i,j);
    return 0;
}
    void HCF(i,j)
    { 
        int k;
      for ( k = 3; k <= i; k++)
       {
          if (i%k==0 && j%k==0)
          {
              break;
          }
       }
          printf("HCF of %d and %d is :%d\n",i,j,k);
         
      }
        
    