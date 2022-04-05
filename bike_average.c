#include<stdio.h>

int main(){
     double i,j;
     printf("Input total distance in km: ");
     scanf("%lf",&i);
     printf("Input total fuel spent in liters: ");
     scanf("%lf",&j);
     printf("Average consumption (km/lt): %.2f\n",i/j);
    return 0;
}