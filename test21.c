// #include<stdio.h>

// int main(){
//     int i=8;
//     int *j;
//     j = &i;
//     printf("Add i =%u\n",&i);
//     printf("Add i = %u\n",j);
//     printf("Add j = %u\n",&j);
//     printf("Value i =%d\n",i);
//     printf("Value i = %d\n",*(&i));
//     printf("Value i = %d\n",*j); 
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=2;i++)
//     {
//         for(j=1;j<=2;j++)
//         {
//             if(i==j)
//             continue;
//             printf("%d%d\n",i,j);
//             printf("hello you are king\n");
//             printf("hello king\n");
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// void swapr(int*,int*);
// int main(){
//     int a=10,b=29;
//     swapr(&a,&b);
//     printf("a=%d b=%d\n",a,b);
//     return 0;
// }
// void swapr(int *x,int *y)
// {
//     int t;
//     t=*x;
//     *x=*y;
//     *y=t;

// }

#include<stdio.h>
void areaperi(int,float*,float*);
int main(){
    int radius;
    float area,perimeter;
    printf("Enter radius of a circle\n");
    scanf("%d",&radius);
    areaperi(radius,&area,&perimeter);
    printf("Area=%f\n",area);
    printf("Perimeter = %f\n",perimeter);
    return 0;
}
void areaperi(int r,float*a,float*p)
{
    *a=3.14*r*r;
    *p = 2*3.14*r;
}