#include<stdio.h>
#include<stdlib.h>

struct node {
   struct node *link;
   int data;
};

struct node *add_Head(struct node *head,int head_data)
{
   struct node *temp=malloc(sizeof(struct node *));
   temp->data=head_data;
   temp->link=head;
   
   head=temp;
   return head;
}

struct node *addBeg(struct node *head,int beg_data)
{
   struct node *temp=malloc(sizeof(struct node *));
   struct node *temp1;
   temp1=head;
   temp->data=beg_data;
   temp->link=temp1;
   while(temp1->link!=head)
   {
      temp1=temp1->link;
   }
   temp1->link=temp;
   temp->link=head;
   head=temp;

   return head;

}

int main()
{
   struct node *head=malloc(sizeof(struct node *));
   int head_data;
   printf("enter the data of head:\t");
   scanf("%d",&head_data);
   head=add_Head(head,head_data);
   printf("the head node data is :%d\n",head->data);

   //insert at begining:-

   struct node *ptr=head;
   int beg_data;
   printf("enter the data to be add at the begining:");
   scanf("%d",&beg_data);
   ptr=addBeg(head,beg_data);
   // ptr=head;
   // ptr=head->link;
   while (ptr!=head)
   {
      printf("%d\t",ptr->data);
      ptr=ptr->link;
   }
   printf("\n");
   
}