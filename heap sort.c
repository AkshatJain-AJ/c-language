#include<stdio.h>
main()
{
    int heap[10],num,i,j,root,temp,c,lpar,rpar;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    printf("Enter the values of the elements\n");
    for(i=1;i<=num;i++)
    {
        scanf("%d",&heap[i]);
    }
    for(i=num;i>=1;i--)
    {
     c=i;
     do{
       root=(c-1)/2;
       if(heap[c]<heap[root])
       {
           temp=heap[root];
           heap[root]=heap[c];
           heap[c]=temp;
       }
       c=root;
     }while(c!=1);
    }
     printf("\nHeap array is..\n");
   for(i=1;i<num;i++)
   {
       printf("%d ",heap[i]);
   }
  /* for(j=num-1;j>=1;j--)
   {
     temp=heap[1];
     heap[1]=heap[j];
     heap[j]=temp;
     root=1;
     do{
     c=2*root+1;
     if((heap[c]<heap[c+1])&&c<j-1)
        c++;
     if(heap[root]<heap[c]&&c<j)
     {
         temp=heap[root];
         heap[root]=heap[c];
         heap[c]=temp;
     }
      root=c;
     }while(c<j);
   }
   printf("\nSorted array is..\n");
    for(i=1;i<=num;i++)
   {
       printf("%d ",heap[i]);
   }
}*/
}
