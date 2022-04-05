#include<stdio.h>

void display();
void skip();
void good();


int main(){
    // int a;
    display();
    skip();
    good();
    
    return 0;
}
void display(){
    printf("Hi i am world\n");
}
void skip(){
    int skip=5;
    int i=0;
    while (i<10)
    {
        i++;
        if (i!=skip)
        {
            continue;
        }
        else
        {
            printf("%d\n",i);
        }
        
        
    }
}  
void good(){
   
    float length,breadth;
    printf("What is the length of rectangle\n");
    scanf("%f", &length);
    printf("What is the breadth of rectangle\n");
    scanf("%f", &breadth);

    printf("The area of your rectangle is %f", length*breadth);
  

}
