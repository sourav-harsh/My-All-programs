#include<stdio.h>

int main(){
    char string[]="sourav kumar\n";
    char *ptr=string;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    


    return 0;
}