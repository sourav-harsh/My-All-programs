#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

// Doubly Linked list in forward direction
void linkedListTraversalnext(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Doubly Linked list in backward direction
void linkedListTraversalprev(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->prev;
    }
}

// Doubly linked list insertion at first
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    ptr->prev = NULL;
    head = ptr;
    return head;
}

// Doubly linked list insertion at end
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    int i = 0;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    struct Node *q = head->next;

    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = ptr;
    ptr->next = q;
    return head;
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first to second nodes and first to Null
    head->prev = NULL;
    head->data = 4;
    head->next = second;

    // Link second to third nodes and second to first
    second->prev = head;
    second->data = 12;
    second->next = third;

    // Link third to fourth nodes and third to second
    third->prev = second;
    third->data = 34;
    third->next = fourth;

    // Link fourth to Null  and fourth to third
    fourth->prev = third;
    fourth->data = 56;
    fourth->next = NULL;

    printf("Doubly Linked list in forward direction\n");
    linkedListTraversalnext(head);
    // printf("\nDoubly Linked list in backward direction\n");
    // linkedListTraversalprev(fourth);
    // head = insertAtFirst(head, 32);
    // head= insertAtEnd(head,43);
    head = insertAtIndex(head, 9, 1);
    printf("\nDoubly Linked list in forward direction after insertion\n");
    linkedListTraversalnext(head);

    return 0;
}