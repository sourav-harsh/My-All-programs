#include<stdio.h>
float average(float a, float b, float c);

int main(){
    float f,a,b,c;
    printf("Enter the three numbers\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    f=average(a,b,c);
    printf("The average of given num is %f\n",f);
    return 0;
}
float average(float a, float b, float c){
    return (a+b+c)/3;
}