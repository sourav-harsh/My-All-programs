#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTravesal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Deleting the first node
struct Node *deleteAtFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// Deleting At index
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *ptr = head;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    struct Node *p = ptr->next;
    ptr->next = p->next;
    free(p);
    return head;
}
// Deleting the last node
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
// Deleting the node from giving value
struct Node *deleteAtValue(struct Node *head, int value)
{
    struct Node *ptr = head;
    struct Node *q = head->next;
    while (q->data != value && q != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }
    if (q->data == value)
    {
        ptr->next = q->next;
        free(q);
    }
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
    fourth->next = NULL;

    // Linked list before deletion
    printf("Linked list before deletion\n");
    linkedListTravesal(head);

    // head=deleteAtFirst(head);
    // head=deleteAtIndex(head,1);
    // head=deleteAtLast(head);
    head = deleteAtValue(head, 98);
    printf("\nLinked list after deletion\n");
    // Linked list after deletion
    linkedListTravesal(head);
    return 0;
}