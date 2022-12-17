#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *left,*right;
};
struct tree* create(){
    int x;
    struct tree *p=(struct tree*)malloc(sizeof(struct tree));
    printf("(-1 for no node) : ");
    scanf("%d",&x);
    if (x==-1)
    {
        return 0;
    }
    p->data = x;
    printf("Enter left child for %d ",x);
    p->left = create();
    printf("Enter right child for %d ",x);
    p->right = create();
    return p;
}
void preorder(struct tree *root){
    if (root==0)
    {
        return;
    }
    printf("%d  ",root->data);
    preorder(root->left);
    preorder(root->right);
}
int main(){
    struct tree *p;
    p = create();
    preorder(p);
}