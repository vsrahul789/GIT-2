#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *link;
};

struct node *add_at_end(struct node *ptr,int data)
{
   struct node *temp = malloc(sizeof(struct node));
   temp->data=data;
   temp->link=NULL;

   ptr->link=temp;
   return temp;
}

struct node *del_at_end(struct node *ptr)
{
   struct node *temp1,*temp2;
   temp1=ptr;
   temp2=ptr;
   
   if(ptr==NULL)
   {
      return ptr;
   }else if(ptr->link==NULL)
   {
      free(ptr);
      ptr=NULL;
      return ptr;
   }else{
      while(temp2->link!=NULL)
      {
         temp2=ptr->link;
         temp1->link=temp2;
      }
      temp1->link=NULL;
      free(temp2);
      temp2=NULL;
      return ptr;
   }
}

int main()
{
   int n,i;
   struct node *head=malloc(sizeof(struct node));
   head->data=35;
   head->link=NULL;

   int a;
   printf("enter the number of elements:");
   scanf("%d",&n);
   // int a[]=malloc(n*sizeof(int));
   printf("enter the elements:");
   for(i=0;i<n;i++)
   {
      scanf("%d",a+i);
      // data[i]=a[i];
      // printf("%d",*(a+i));
   }

   struct node *ptr=head;
   for(i=0;i<n;i++)
   {
      ptr=add_at_end(ptr, a+i);
   }
   ptr=head;
   ptr=del_at_end(ptr);
   
   while (ptr!=NULL)
   {
      printf("%d\t",ptr->data);
      ptr=ptr->link;
   }
   printf("\n");
}