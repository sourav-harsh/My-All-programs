#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
};

void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
int max(int a, int b)
{
    return a > b ? a : b;
}

int getHeight(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}

int getbalanceFactor(struct Node *n)
{
    if (n == NULL)
        return 0;
    return getHeight(n->left) - getHeight(n->right);
}

struct Node *creatNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

struct Node *rightRotation(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->right), getHeight(y->left) + 1);
    x->height = max(getHeight(x->right), getHeight(x->left) + 1);
    return x;
}

struct Node *leftRotation(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(getHeight(y->right), getHeight(y->left) + 1);
    x->height = max(getHeight(x->right), getHeight(x->left) + 1);
    return y;
}
struct Node *insert(struct Node *node, int data)
{
    if (node == NULL)
    {
        return (creatNode(data));
    }
    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }
    if (data > node->data)
    {
        node->right = insert(node->right, data);
    }
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getbalanceFactor(node);
    if (bf > 1 && data < node->left->data)
    {
        return rightRotation(node);
    }
    if (bf < -1 && data > node->right->data)
    {
        return leftRotation(node);
    }
    if (bf > 1 && data > node->left->data)
    {
        node->left = leftRotation(node->left);
        return rightRotation(node);
    }
    if (bf < -1 && data < node->right->data)
    {
        node->right = rightRotation(node->right);
        return leftRotation(node);
    }
    return node;
}
int main()
{
    struct Node *root = NULL;
    root = insert(root, 1);
    root = insert(root, 92);
    root = insert(root, 49);
    root = insert(root, 12);
    root = insert(root, 57);
    root = insert(root, 9);
    root = insert(root, 4);
    inOrder(root);
    printf("\n");
    return 0;
}