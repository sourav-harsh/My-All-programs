#include<stdio.h>
#include<string.h>

int main(){
    char st1[34];
    char st2[34];
    int c;
    int i=0;
    printf("Enter the value of frist string\n");
    scanf("%s",&st1);
    printf("Enter the value of second string\n");
    while (c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';
    printf("The value of first string is %s\n",st1);
    printf("The value of second string is %s\n",st2);
    printf("The comparation  value of first and second string is %d\n",strcmp(st1,st2));


    
    return 0;
}