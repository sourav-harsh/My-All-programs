#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    n->data =data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void inOrder(struct Node *root)
{
    if(root!=NULL)
    {
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
    }
}
int isBST(struct Node *root)
{
    static struct Node *prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL&&root->data<prev->data)
        {
            return 0;
        }
        prev =root;
        return isBST(root->right);
    }
    else
    return 1;
}

struct Node *search(struct Node *root,int key)
{
    while (root!=NULL)
    {
        if(key==root->data)
        {
            return root;
        }
        else if(key<root->data)
        {
            root = root->left;
        }
        else
        root=root->right;
    }
    return NULL;
    
}
int insertion(struct Node *root,int key)
{
    struct Node *prev=NULL;
    while (root !=NULL)
    {
        prev=root;
        if(key==root->data)
        {
            printf("Cannot insert %d, already in BST",key);
            return 1;
        }
        else if (key<root->data)
        {
            root = root->left;
        }
        else
        root =root->right;
    }
        struct Node *new=createNode(key);
        if(key<prev->data)
        {
            prev->left=new;
        }
        else
        prev->right=new;
    return 0;
}
int main(){
    struct Node *p=createNode(5);
    struct Node *p1=createNode(3);
    struct Node *p2=createNode(6);
    struct Node *p3=createNode(1);
    struct Node *p4=createNode(4);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    inOrder(p);
    printf("\n");
    if(insertion(p,3)){}
    else
    inOrder(p);
    printf("\n");
    if(isBST(p))
    {
        printf("This tree is BST\n");
    }
    else
    printf("This tree is not BST\n");
    struct Node *n=search(p,2);
    if(n!=NULL)
    {
        printf("%d is found in the tree\n",n->data);
    }
    else
    printf("Elements is not found\n");
    return 0;
}