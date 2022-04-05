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
    n->right = NULL;
    n->left = NULL;
    return n;
}
void postOrder(struct Node *root)
{
    if(root!=NULL)
    {
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
    }
}
int main()
{

    struct Node *p = createNode(7);
    struct Node *p1 = createNode(2);
    struct Node *p2 = createNode(1);
    struct Node *p3 = createNode(0);
    struct Node *p4 = createNode(4);
    // struct Node *p = createNode(3);
    // struct Node *p1 = createNode(8);
    // struct Node *p2 = createNode(12);
    // struct Node *p3 = createNode(32);
    // struct Node *p4 = createNode(24);
    // struct Node *p5 = createNode(29);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    // p3->left = p5;
    postOrder(p);
    printf("\n");
    return 0;
}
