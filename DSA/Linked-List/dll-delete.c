#include<stdio.h>
#include<stdlib.h>

struct node{
   struct node *prev;
   int data;
   struct node *next;
};

struct node *head_add(struct node *head,int data)
{
   struct node *temp=malloc(sizeof(struct node *));
   temp->prev=NULL;
   temp->data=data;
   temp->next=NULL;

   head=temp;
   return head;
}

struct node *addAtEnd(struct node *head,int data)
{
   struct node *temp;
   struct node *temp1=malloc(sizeof(struct node));
   temp=head;
   temp1->prev=NULL;
   temp1->data=data;
   temp1->next=NULL;
   while (temp->next!=NULL)
   {
       temp=temp->next;
   }
   temp1->prev=temp;
   temp->next=temp1;
   
   return head;
}

struct node *del_beg(struct node *head)
{
   struct node *temp=head;
   head=head->next;
   free(temp);
   temp=NULL;
   head->prev=NULL;

   return head;
}

struct node *del_end(struct node *head)
{
   struct node *temp;
   struct node *temp1;
   // temp=temp1->next;
   temp=head;
   temp1=head;
   while (temp1->next->next!=NULL)
   {
      temp=temp1->next;
      temp1=temp;
   }
   temp=temp1->next;
   free(temp);
   temp=NULL;
   temp1->next=NULL;

   return head;
   
}

struct node *del_pos(struct node *head,int pos)
{
   struct node *temp1;
   struct node *temp;
   temp1=head;
   temp=head;
   while (pos!=2)
   {
      temp=temp1->next;
      temp1=temp;
      pos--;
   }
   temp1=temp1->next;
   temp->next=temp1->next;
   temp=temp1->next;
   temp->prev=temp1->prev;
   free(temp1);
   temp1=NULL;

   return head;
}
int main()
{
   struct node *head=malloc(sizeof(struct node *));
   // int data1;
   // printf("enter the head data:");
   // scanf("%d",&data1);
   head=head_add(head,1);
   printf("the head data=%d\n",head->data);

   struct node *ptr=head;
   ptr=addAtEnd(head,36);
   ptr=addAtEnd(head,37);
   ptr=addAtEnd(head,38);
   ptr=addAtEnd(head,39);
   ptr=addAtEnd(head,40);
   ptr=addAtEnd(head,41);
   ptr=head;

   printf("Linked List before deleting:\n");
   while (ptr!=NULL)
   {
      printf("%d\t",ptr->data);
      ptr=ptr->next;
   }
   printf("\n");
   //deleting the first item:-
   // head=del_beg(head);
   // ptr=head;
   // printf("the list after deleting first item:\n");
   // while(ptr!=NULL)
   // {
   //    printf("%d\t",ptr->data);
   //    ptr=ptr->next;
   // }

   //delete item in end:-

   // head=del_end(head);
   // ptr=head;
   // printf("the list after deleting last item:\n");
   // while(ptr!=NULL)
   // {
   //    printf("%d\t",ptr->data);
   //    ptr=ptr->next;
   // }

   //deleting at a certain position:-

   int pos;
   printf("enter the position:");
   scanf("%d",&pos);
   head=del_pos(head,pos);
   printf("Linked List after deleting at %d:",pos);
   ptr=head;
   while (ptr!=NULL)
   {
      printf("%d\t",ptr->data);
      ptr=ptr->next;
   }
   printf("\n");
   return 0;
}