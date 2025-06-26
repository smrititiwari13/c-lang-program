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
int leafNode(node* root)
{
    if (root == NULL) 
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL )
    return 1;
    return (leafNode(root->left)+leafNode(root->right));
    
    
}

int main() 
{
    node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->right = createNode(20);

   printf("%d",leafNode(root));
   

    return 0;
}
