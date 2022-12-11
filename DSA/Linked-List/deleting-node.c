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

//delete element at first:)

// struct node *del_first(struct node *head)
// {
//    struct node *temp=head;
//    head=head->link;
//    free(temp);
//    temp=NULL;
//    return head;
// }
// int main()
// {
//    struct node *head = malloc(sizeof(struct node));
//    head->data=10;
//    head->link=NULL;

//    struct node *ptr = head;
//    ptr=add_at_end(ptr, 194);
//    ptr=add_at_end(ptr, 26);
//    ptr=add_at_end(ptr, 39);
//    ptr=add_at_end(ptr, 40);
//    ptr=add_at_end(ptr, 19);

//    head=del_first(head);
//    ptr=head;

//    while(ptr!=0)
//    {
//       printf("%d\t",ptr->data);
//       ptr=ptr->link;
//    }
//    printf("\n");

// }

//delete element at end:)

