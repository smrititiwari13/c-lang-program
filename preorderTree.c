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
void preorder(node* root)
{
    if (root == NULL) 
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    
    preorder(root->right);
}

int main() 
{
    node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->right = createNode(20);

    preorder(root);

    return 0;
}
