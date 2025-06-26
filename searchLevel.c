#include <stdio.h>
#include <stdlib.h>

typedef struct list 
{
    int data;
    struct list *left, *right;
} node;

node* createNode(int data) 
{
    node* p = (node*)malloc(sizeof(node));
    p->data = data;
    p->left = p->right = NULL;
    return p;
}
int search(node* root,int x,int l)
{
    if (root == NULL) 
    {
        return -1;
    }
    if(root->data==x )
    return l;
    int leftLevel = search(root->left, x, l + 1);
    if (leftLevel != -1)
    return leftLevel;

    return search(root->right, x, l + 1);
    
    
}

int main() 
{
    node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->right = createNode(20);

   int level=search(root,7,0);
   printf("%d",level);

    return 0;
}
