#include<stdio.h>
float su(float x ,float i) {
    	float sum,t,d;
	    int j;
	sum =1; t = 1;
	for (j=1;j<i;j++)
	{
	  d = (2*j)*(2*j-1);
	  t = -t*x*x/d;
	  sum =sum+ t;
	}
return sum;
} 
int main(){
    float x,i;
    printf("Input the Value of x :");
    scanf("%f",&x);
    printf("Input the number of terms :");
    scanf("%f",&i);
    printf("\nNumber of terms = %f",i);
    printf("\nvalue of x = %f\n",x);
    printf("\nthe sum = %f\n",su(x,i));
 
    return 0;
}