#include<stdio.h>
#include<stdlib.h>
int main()
{
int Max_size,f,r,element,queue[100],i;
int ch;
printf("Enter the size of queue");
scanf("%d",&Max_size);
f=-1;
r=-1;
do{
printf("Avaliable options in the List");
printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
printf("Click on choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the element to be inserted\n");
scanf("%d",&element);
if((Max_size-1)==r)
printf("Overflow\n");
else if(f==-1&&r==-1)
{
f=0;
r=0;
queue[r]=element;
}
else
{
r=r+1;
queue[r]=element;
}
break;
case 2:
/*printf("Enter the element to be deleted\n");
scanf("%d",&element);*/
if(f==-1)
printf("Underflow\n");
else if(f==r)
{
printf("%d\n",queue[f]);
f=-1;
r=-1;
}
else
{
printf("%d\n",queue[f]);
f=f+1;
}
break;
case 3:
printf("Displaying the queue \n");
for(i=f;i<=r;i++)
{
printf("%d ",queue[i]);

printf("\n");
}
break;
case 4:
exit(0);
break;
default:
printf("Invalid input\n");
break;
}
printf("What you want to do next--.\n");
} while(ch!=4);
}
