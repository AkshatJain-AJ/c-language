#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
int temp;
struct node *np;
 preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
struct node *create_node()
{
    np=(struct node*)malloc(sizeof(struct node));
    np->left=NULL;
    np->right=NULL;
    printf("Enter the data of the node\n");
    scanf("%d",&np->data);
    return np;
}
tree(struct node *root, struct node *temp)
{
    if(temp->data < root->data)
    {
        if(root->left==NULL)
            root->left=temp;
        else
            tree(root->left,temp);
    }
        if(temp->data >= root->data)
    {
        if(root->right==NULL)
            root->right=temp;
        else
            tree(root->right,temp);
    }
}
void main()
{
    int ch1,ch2,ch3;
    struct node *temp;
   do
    {
        temp=create_node();
        if(root==NULL)
            root=temp;
        else
            tree(root,temp);

    printf("Press 1 to enter more else 0\n");
    scanf("%d",&ch1);
    }while(ch1==1);
    preorder(root);
}
