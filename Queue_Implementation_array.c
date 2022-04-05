#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct Queue *q)
{
    if (q->r==q->f)
    {
        return 1;
    }
    return 0; 
}

int isFull(struct Queue *q)
{
    if (q->r==q->size-1)
    {
        return 1;
    }
    return 0; 
}

void enqueue(struct Queue *q,int val)
{
    if (isFull(q))
    {
        printf("This queue is full\n");
    }
    q->r++;
    q->arr[q->r]=val;
    
}

int dequeue(struct Queue *q)
{
    int a=-1;
    if (isEmpty(q))
    {
        printf("This queue is empty\n");
    }
    q->f++;
    a=q->arr[q->f];
    return a;
}

int main(){
    struct Queue q;
    q.size=3;
    q.f=q.r=-1;
    q.arr=(int *)malloc(q.size*sizeof(int));
// if (isEmpty(&q))
// {
//     printf("The Queue is empty\n");
// }
enqueue(&q,14);
enqueue(&q,12);
enqueue(&q,19);
enqueue(&q,89);
printf("%d\n",dequeue(&q));
if (isFull(&q))
{
    printf("The Queue is Full\n");
}
return 0;
}                   