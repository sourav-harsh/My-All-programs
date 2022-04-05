#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("\nStack Overflow!Cannot push %d to the stack\n", val);
    }
    ptr->top++;
    ptr->arr[ptr->top] = val;
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nStack Underflow!Cannot pop from the stack\n");
        return -1;
    }
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}

int peek(struct stack *ptr,int index)
{
    if (ptr->top-index+1<0||isEmpty(ptr))
    {
        printf("\nInvalid Input\n");    
    }
    int val=ptr->arr[index];
    return val;
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sizeof(int));

    printf("Before pushing any element status of stack\n");
    if (isFull(sp))
    {
        printf("Stack is Full\n");
    }
    else
        printf("Stack is not Full\n");
    if (isEmpty(sp))
    {
        printf("Stack is Empty\n");
    }
    else
        printf("Stack is not Empty\n");

    push(sp, 43);
    push(sp, 13);
    push(sp, 38);
    push(sp, 32);
    push(sp, 83);
    printf("\nThe value at given index is %d\n",peek(sp,5));

    printf("\nAfter pushing any element status of stack\n");
    if (isFull(sp))
    {
        printf("Stack is Full\n");
    }
    else
        printf("Stack is not Full\n");
    if (isEmpty(sp))
    {
        printf("Stack is Empty\n");
    }
    else
        printf("Stack is not Empty\n");

        printf("\nPopped %d from the stack \n",pop(sp));
        // printf("Popped %d from the stack \n",pop(sp));
    return 0;
}