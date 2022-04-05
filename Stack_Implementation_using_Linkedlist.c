#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
 struct Node *top = NULL;
void linkedListTravesal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
        return 0;
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
int *pop(struct Node  *top)
{
    if (isEmpty(top))
    {
        printf("Stack Underflow\n");
        return 0;
    }
    else
    {
        struct Node *ptr = top;
        top = (top)->next;
        int x = ptr->data;
        free(ptr);
        return x;
    }
}

int peek(int index)
{
struct Node *ptr=top;
for (int i = 0; (i < index-1&&ptr !=NULL); i++)
{
    ptr=ptr->next;
}
if (ptr!=NULL)
{
    return ptr->data;
}
return -1;

}
int main()
{
   
    top = push(top, 43);
    top = push(top, 13);
    top = push(top, 4);
    printf("\nStack before popping element\n");
    linkedListTravesal(top);
    // int element = pop(&top);
    // printf("\nThe value popped is %d\n",element);
    printf("\nStack after popping element\n");
    linkedListTravesal(top);
    printf("The value of at given index is %d\n",peek(3));
    return 0;
}