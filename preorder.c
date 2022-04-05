#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{

    struct Node *p = createNode(7);
    struct Node *p1 = createNode(2);
    struct Node *p2 = createNode(1);
    struct Node *p3 = createNode(0);
    struct Node *p4 = createNode(4);
    // struct Node *p = createNode(2);
    // struct Node *p1 = createNode(5);
    // struct Node *p2 = createNode(8);
    // struct Node *p3 = createNode(3);
    // struct Node *p4 = createNode(9);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    preOrder(p);
    printf("\n");
    return 0;
}