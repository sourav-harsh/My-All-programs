#include<stdio.h>

int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
int mul(int a,int b){
    int c;
    c=a*b;
    return c;
}
float div(float a,float b){
    float c;
    c=a/b;
    return c;
}
int main(){
    int a,b,d,m;
    float u;
    printf("Give your two input\n");
    scanf("%d %d",&a,&b);
    d=sum(a,b);
    m= mul(a,b);
    u= div(a,b);
    printf("sum = %d\n",d);
    printf("multiply = %d\n",m);
    printf("divide = %f\n",u);
    return 0;
}