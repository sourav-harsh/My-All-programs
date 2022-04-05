#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

// Circular Linked list Traversal
void linkedListTravesal(struct Node *head)
{
    struct Node *ptr=head;
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }while (ptr != head);
}

// Circular Linked list insert at first
struct Node *insertAtFirst(struct Node *head,int data)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
} 

// Circular Linked List insert at any index
struct Node *insertAtIndex(struct Node *head,int data,int index)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

// Circular Linked list insert at end
struct Node *insertAtEnd(struct Node *head,int data)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    do
    {
        p=p->next;
    }while(p->next!=head);
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third Node
    second->data = 11;
    second->next = third;

    // Link third and fourth Node
    third->data = 66;
    third->next = fourth;

    // Terminate the list at the fourth Node
    fourth->data = 98;
    fourth->next = head;

    // Calling the function to the main
    printf("Circular Linked list before insertion\n");
    linkedListTravesal(head);
    // head = insertAtFirst(head,44);
    // head=insertAtIndex(head,23,2);
    head = insertAtEnd(head,89);
    printf("\nCircular Linked list after insertion\n");
    linkedListTravesal(head);
    return 0;
}     