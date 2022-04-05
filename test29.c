//************************PROGRAM OF RECURSIVE FUNCTION*****************************

// #include<stdio.h>
// void my_recursive_function(int n)
// {
//     if (n == 0)
//     return;
//     printf("%d",n);
//     my_recursive_function(n-1);
// }
// int main()
// {
//  my_recursive_function(10);
//   return 0; 
// }

//***************************AUTOMATIC STORAGE CLASS VARIABLE**************************

// #include<stdio.h>

// int main(){
//   auto int i,j;
//   printf("%d %d\n",j,i);
//   return 0;
// }



// #include<stdio.h>

// int main(){
//    auto int i=1;
//   {
//      auto int i=2;
//     {
//        auto int i=3;
//       printf("%d\n",i);
//     }
//     printf("%d\n",i);
//   }
//   printf("%d\n",i);
//   return 0;
// }

// ***************************REGISTER STORAGE CLASS VARIABLE***************************

//*****************************STATIC STORAGE CLASS VARIABLE****************************

// #include<stdio.h>
// void increment();
// int main(){
//   increment();
//   increment();
//   increment();
//   return 0;
// }
// void increment()
// {
// auto int i=1;
// static int j=1;
// i=i+1;
// j=j+1;
// printf("%d %d\n",i,j);
// }

// *************************EXTERNAL STORAGE CLASS VARIABLE*****************************

// #include<stdio.h>
// int i;
// void increment();
// void decrement();
// int main()
// {
//     printf("\ni=%d\n",i);
//     increment();
//     increment();
//     decrement();
//     decrement();
//     return 0;
// }
// void increment()
// {
//     i=i+1;
//     printf("on incrementing i = %d\n",i);
// }
// void decrement()
// {
//     i=i-1;
//     printf("on decrementing i = %d\n",i);
// }



// #include<stdio.h>
// int x=21;
// int main(){
//     extern int y;
//     printf("%d %d\n",x,y);
//     return 0;
// }
// int y=31;



// #include<stdio.h>
// int x=10;
// void display();
// int main(){
//     int x=20;
//     printf("%d\n",x);
//     display();
//     return 0;
// }
// void display()
// {
//     printf("%d\n",x);
// }

// #include<stdio.h>
// int i=35;
// int fun1();
// int fun2();
// int main()
// {
//     printf("%d\n",i);
//     fun1();
//     fun2();
//     return 0;
// }
// int fun1()
// {
//     i++;
//     printf("%d\n",i);
//     return 0;
// }
// int fun2()
// {
//     i--;
//     printf("%d\n",i);
//     return 0;
// }