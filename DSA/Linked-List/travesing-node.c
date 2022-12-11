#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *link;
};

//adding the element in the begining:)

// struct node *add_beg(struct node *head,int data)
// {
//    struct node *ptr=malloc(sizeof(struct node ));
//    ptr->data=data;
//    ptr->link=NULL;

//    ptr->link=head;
//    head=ptr;
//    return head;
// }

// int main()
// {
//    struct node *head=malloc(sizeof(struct node *));
//    head->data=45;
//    head->link=NULL;

//    struct node *ptr=malloc(sizeof(struct node *));
//    ptr->data=65;
//    ptr->link=NULL;

//    head->link=ptr;

//    int data=69;

//    head=add_beg(head,data);
//    ptr=head;

//    while(ptr!=NULL).
   
//    {
//       printf("DATA IS :%d\n",ptr->data);
//       ptr=ptr->link;
//    }
//    return 0;
// }


//adding the element in the end:)
struct node *add_at_end(struct node *ptr, int data)
{
   struct node *temp=(struct node *)malloc(sizeof(struct node));
   temp->data=data;
   temp->link=NULL;

   ptr->link=temp;
   return temp;
}

// int main()
// {
//    struct node *head = (struct node *)malloc(sizeof(struct node));
//    head->data=45;
//    head->link=NULL;

//    struct node *ptr = head;
//    ptr = add_at_end(ptr, 67);
//    ptr = add_at_end(ptr, 3);
//    ptr = add_at_end(ptr, 48);
//    ptr = add_at_end(ptr, 34);
//    ptr = head;
//    while (ptr != NULL)
//    {
//       printf("%d\t",ptr->data);
//       ptr = ptr->link;
//    }
//    printf("\n");
//    return 0;
// }

// add the elements at certain point:)

void add_at_pos(struct node *ptr, int data, int pos)
{
   struct node *ptr2=malloc(sizeof(struct node));
   ptr2->data=data;
   ptr2->link=NULL;

   pos--;
   while (pos!=1)
   {
      ptr=ptr->link;
      pos--;
   }
   ptr2->link=ptr->link;
   ptr->link=ptr2;
}

int main()
{
   struct node *head = (struct node *)malloc(sizeof(struct node));
   head->data=45;
   head->link=NULL;

   struct node *ptr = head;
   ptr = add_at_end(ptr, 67);
   ptr = add_at_end(ptr, 3);
   ptr = add_at_end(ptr, 48);
   ptr = add_at_end(ptr, 34);
   ptr=head;

   int data=102, pos=3;
   add_at_pos(ptr, data, pos);
   

   while (ptr!=NULL)
   {
      printf("%d\t",ptr->data);
      ptr=ptr->link;
   }
   printf("\n");
}