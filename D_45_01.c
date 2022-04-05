#include<stdio.h>

int main(){
    int i;
    int j;
    float k=0;
    printf("Input the number of terms :\n");
    scanf("%d",&i);
    for ( j = 1; j <= i; j++)
    {
        printf("1/%d + ",j);
    }
    for (float h = 1; h <= i; h++)
    {
        k=k+(1/h);
    }
    
    printf("\nSum of Series upto %d terms : %f\n",i,k);
    
    return 0;
}