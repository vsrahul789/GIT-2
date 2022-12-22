#include<stdio.h>
#include<stdlib.h>

struct node {
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

// Reversing a list

// struct node *reverse(struct node *head)
// {
//    struct node *temp1,*temp2;
//    temp1=NULL;
//    temp2=NULL;

//    while(head!=NULL)
//    {
//       temp2=head->link;
//       head->link=temp1;
//       temp1=head;
//       head=temp2;
//    }
//    head=temp1;
//    return head;
// }

// int main()
// {
//    struct node *head = malloc(sizeof(struct node));
//    head->data=45;
//    head->link=NULL;

//    struct node *ptr=head;
//    ptr=add_at_end(ptr,89);
//    ptr=add_at_end(ptr,18);
//    ptr=add_at_end(ptr,24);
//    ptr=add_at_end(ptr,34);
//    ptr=add_at_end(ptr,39);
//    ptr=add_at_end(ptr,34);
//    ptr=add_at_end(ptr,32);
//    ptr=head;

//    ptr=reverse(head);

//    while(ptr!=NULL)
//    {
//       printf("%d\t",ptr->data);
//       ptr=ptr->link;
//    }
//    return 0;
// }

// Rearrange a list

struct node *rearrange(struct node *head)
{
   struct node *p,*q;
   int temp;
   if(!head || !head->link) // this is equivalent to if(head==NULL || head->link==NULL)
   {
     return 0;
   }
   p=head;
   q=p->link;
   while(q) //this is equivalent to while(q==NULL)
   {
      temp=p->data;
      p->data=q->data;
      q->data=temp;
      q=p ? (p->link):0; /*this is equivalent to if(q==)*/
   }
   return head;

}
int main()
{
   struct node *head = malloc(sizeof(struct node));
   head->data=0;
   head->link=NULL;

   struct node *ptr=head;
   ptr=add_at_end(ptr,1);
   ptr=add_at_end(ptr,2);
   ptr=add_at_end(ptr,3);
   ptr=add_at_end(ptr,4);
   ptr=add_at_end(ptr,5);
   ptr=add_at_end(ptr,6);
   ptr=add_at_end(ptr,7);
   ptr=head;

   head=rearrange(head);
    while(ptr!=NULL)
   {
      printf("%d\t",ptr->data);
      ptr=ptr->link;
   }
   return 0;
}