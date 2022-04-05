;#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *f = NULL;
struct Node *r = NULL;

void linkedListTransversal(struct Node *ptr)
{
    printf("Elements in the linked list\n");
    while (ptr != NULL)
    {
        printf("Elements: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is full");
    }
    n->data = val;
    n->next = NULL;
    if (f == NULL)
    {
        f = r = n;
    }
    r->next = n;
    r = n;
}

int dequeue()
{
    int val =-1;
    struct Node *ptr=f;
    if (f==NULL)
    {
        printf("Queue is Empty\n");
        return val;
    }
    f=f->next;
    val = ptr->data;
    free(ptr);
    return val;
}

int main()
{
    // linkedListTransversal(f);
    // printf("Dequeuing element is %d \n",dequeue()); 
    enqueue(45);
    enqueue(4);
    enqueue(5);
    linkedListTransversal(f);
    printf("Dequeuing element is %d \n",dequeue()); 
    // printf("Dequeuing element is %d \n",dequeue()); 
    // linkedListTransversal(f);
    return 0;
}