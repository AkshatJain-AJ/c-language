#include<stdio.h>
struct node
{
int data;
struct node *next;
}*start=NULL,*top=NULL,*np,*ptr,*save;
int a,num;
void Push();
void Pop();
void Display();
int main()
{
do
{
printf("\nMenu\n1.Push\n2.Pop\n3.Display\n4.Exit");
scanf("%d",&num);
switch(num)
{
case 1: Push();
break;
case 2: Pop();
break;
case 3: Display();
break;
case 4: exit(0);
break;
default : printf("\nInvalid Input\n");
break;
}
}while(num!=4);
}
void Push()
{
printf("\nEntered the valid that you want to insert\n");
scanf("%d",&a);
np=(struct node *)malloc(sizeof(struct node));
if(np==NULL)
{
printf("\nOverflow\n");
return;
}
np->data=a;
np->next=NULL;
if(start==NULL)
{
start=np;
top=np;
}
else
{
top->next=np;
top=np;
}
}
void Pop()
{

if(start==NULL)
{
printf("\nUnderflow\n");
return;
}
if(start->next==NULL)
{
free(start);
start=NULL;
}
else{
save=start;
ptr=start;
while(ptr->next!=NULL)
{
save=ptr;
ptr=ptr->next;
}
save->next=NULL;
top=save;
free(ptr);
ptr=NULL;
}
}
void Display()
{
ptr=start;
if(ptr==NULL)
printf("\nEmpty Stack\n");
else
{
printf("Stack is ");
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->next;
}
}
}
