#include<stdio.h>

int main(){
    struct emp
    {
        int a;char ch;float s;
    };
    struct emp e;
    printf("%u %u %u\n",&e.a,&e.ch,&e.s);
    return 0;
}