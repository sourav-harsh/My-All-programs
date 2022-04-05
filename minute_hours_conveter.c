#include<stdio.h>

int main(){
    int i,j;
    printf("Enter minutes: ");
    scanf("%d",&i);
printf("%d hours, %d minute\n",i/60,i%60);
    return 0;
}