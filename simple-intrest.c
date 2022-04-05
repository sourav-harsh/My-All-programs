#include<stdio.h>

 main(){
     float p,n,r,si;
     printf("what is the value of p,n,r\n");
     scanf("%f %f %f",&p,&r,&n);
     si=p*n*r/100;
     printf("the value of simple interest is %f\n", si);

    return 0;
}