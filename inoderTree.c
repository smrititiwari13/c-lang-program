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
void inorder(node* root)
{
    if (root == NULL) 
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() 
{
    node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->right = createNode(20);

    inorder(root);

    return 0;
}
