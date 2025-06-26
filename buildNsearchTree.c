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
node* buildTree() {
    int x;
    printf("Enter data(-1 for null) ");
    scanf("%d", &x);

    if (x == -1)
        return NULL;

    node* root = createNode(x);
    printf("Enter left child of %d\n", x);
    root->left = buildTree();
    printf("Enter right child of %d\n", x);
    root->right = buildTree();

    return root;
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
    printf("Build the tree:\n");
    node* root = buildTree();
    int level=search(root,4,0);
   printf("%d",level);

    return 0;
}
