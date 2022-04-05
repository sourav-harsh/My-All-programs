#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void createLinkedList(struct Node *root, int data)
{
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = data;
    // root->next = NULL;
    // return root;
}
// void linkingNode(struct Node *a, struct Node *b)
// {
//     a->next = b;
//     // return p2;
// }
void linkedListTraversal(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    struct Node *p;
    struct Node *p1;
    struct Node *p2;
    struct Node *p3;
    createLinkedList(p, 23);
    createLinkedList(p1, 20);
    createLinkedList(p2, 36);
    createLinkedList(p3, 54);
    // linkingNode(p, p1);
    // linkingNode(p1, p2);
    // linkingNode(p2, p3);
    p->next=p1;
    p1->next=p2;
    p2->next=p3;
    p3->next=NULL;
    linkedListTraversal(p);
    return 0;
}