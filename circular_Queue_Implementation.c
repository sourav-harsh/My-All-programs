#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

void  enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("This circularQueue is full\n");
    }
    q->r = (q->r + 1) % q->size;
    q->arr[q->r] = val;
}

int dequeue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("This circularQueue is empty\n");
    }
    q->f = (q->f + 1) % q->size;
    a = q->arr[q->f];
    return a;
}

int main()
{
    struct circularQueue q;
    q.size = 3;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // if (isEmpty(&q))
    // {
    //     printf("The circularQueue is empty\n");
    // }
    enqueue(&q, 14);
    enqueue(&q, 12);
    enqueue(&q, 19);
    enqueue(&q, 89);
    printf("%d\n", dequeue(&q));
    if (isFull(&q))
    { 
        printf("The circularQueue is Full\n");
    }
    return 0;
}