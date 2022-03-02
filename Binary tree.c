#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *root=NULL;
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
struct node *np;
np=(struct node*)malloc(sizeof(struct node));
np->left=NULL;
np->right=NULL;
printf("Enter the data of the node\n");
scanf("%d",&np->data);
return np;
}
void tree(struct node *root)
{
int num1,num2;
printf("Press 1 if left of %d exist else 0\n",root->data);
scanf("%d",&num1);
if(num1==1)
{
root->left=create_node();
tree(root->left);
}
printf("Press 1 if right of %d exist else 0\n",root->data);
scanf("%d",&num2);
if(num2==1)
{
root->right=create_node();
tree(root->right);
}
}
void main()
{
int ch1,ch2;
printf("Press 1 to create a tree else 0\n");
scanf("%d",&ch1);
if(ch1==1)
{

root=create_node();
tree(root);
}
if(ch1==0)
{
return;
}
preorder(root);
}
