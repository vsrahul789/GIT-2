#include<stdio.h>
#include<stdlib.h>

struct node {
   struct node *prev;
   int data;
   struct node *next;
};
struct node *addToEmptyList(struct node *head, int data)
{
   struct node *temp=malloc(sizeof(struct node *));
   temp->prev=NULL;
   temp->data=data;
   temp->next=NULL;

   head=temp;
   return head;
};

//insert at the begining

// struct node *addAtBeg(struct node *head,int data)
// {
//    struct node *temp=malloc(sizeof(struct node *));
//    temp->prev=NULL;
//    temp->data=data;
//    temp->next=head;
//    head->prev=temp;

//    head=temp;
//    return head;
// }

// int main()
// {
//    struct node *head=NULL;
//    head=addToEmptyList(head,45);

//    struct node *ptr;
//    head=addAtBeg(head,39);
//    ptr=head;
//    while (ptr!=NULL)
//    {
//       printf("%d\n",ptr->data);
//       ptr=ptr->next;
//    }
//    return 0;
// }

//insert at the end

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

// int main()
// {
//    struct node *head=malloc(sizeof(struct node));
//    head=addToEmptyList(head,35);
   
//    struct node *ptr=head;
//    ptr=addAtEnd(ptr,36);
//    ptr=addAtEnd(ptr,37);
//    ptr=addAtEnd(ptr,38);
//    ptr=addAtEnd(ptr,39);
//    ptr=addAtEnd(ptr,40);
//    ptr=addAtEnd(ptr,41);
//    ptr=head;

//    while (ptr!=NULL)
//    {
//       printf("%d\t",ptr->data);
//       ptr=ptr->next;
//    }
//    printf("\n");

//    return 0;
// }

//insert at position

struct node *addAtPos(struct node *ptr,int data,int pos)
{
   struct node *temp;
   struct node *temp1=malloc(sizeof(struct node *));
   temp1->prev=NULL;
   temp1->data=data;
   temp1->next=NULL;
   
   temp=ptr;
   while(pos!=1)
   {
      temp=temp->next;
      pos--;
   }
   temp1->next=temp->next;
   temp1->prev=temp;
   temp->next=temp1;

   return ptr;

}

int main()
{
   struct node *head=NULL;
   head=addToEmptyList(head,35);

   struct node *ptr=head;
   ptr=addAtEnd(ptr,36);
   ptr=addAtEnd(ptr,37);
   ptr=addAtEnd(ptr,38);
   ptr=addAtEnd(ptr,39);
   ptr=addAtEnd(ptr,40);
   ptr=addAtEnd(ptr,41);
   ptr=head;

   printf("the Linked List before adding");
   while (ptr!=NULL)
   {
      printf("%d\t",ptr->data);
      ptr=ptr->next;
   }
   printf("\n");

   int pos,item;
   printf("enter the position and item respectively:\n");
   scanf("%d %d",&pos,&item);

   ptr=addAtPos(head,item,pos);
   printf("Linked List after adding\n");
   while (ptr!=NULL)
   {
      printf("%d\t",ptr->data);
      ptr=ptr->next;
   }
   return 0;
}