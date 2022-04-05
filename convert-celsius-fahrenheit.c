#include<stdio.h>

int main(){
    float celsius,fahrenheit;
    printf("what is the temperature in celsius\n");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("the temperature in far is %f\n",fahrenheit);

    return 0;
}