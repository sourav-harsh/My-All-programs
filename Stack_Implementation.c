#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    // struct stack s;
    // s.size=6;
    // s.top=-1;
    // s.arr=(int *)malloc(s.size*sizeof(int));

    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // s->arr[0]=7;
    // s->top++;
     
    if (isEmpty(s))
    {
        printf("The stack is Empty\n");
    }
    else
        printf("The stack is not Empty\n");
    return 0;
}