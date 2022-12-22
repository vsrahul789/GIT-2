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

//delete element at end using two pointers :)

// struct node *del_at_end(struct node *head)
// {
//    struct node *temp1,*temp2;
//    temp1=head;
//    temp2=head;
   
//    if(head==NULL)
//    {
//       printf("list is empty");
//    }else if(head->link==NULL)
//    {
//       free(head);
//       head=NULL;
//    }else{
//       while(temp1->link!=NULL)
//       {
//          temp2=temp1;
//          temp1=temp1->link;
//       }
//       temp2->link=NULL;
//       free(temp1);
//       temp1=NULL;
//    }
//    return head;
// }

// int main()
// {
//    int n,i;
//    struct node *head=malloc(sizeof(struct node));
//    head->data=35;
//    head->link=NULL;

//    struct node *ptr=head;
//    ptr=add_at_end(ptr,12);
//    ptr=add_at_end(ptr,26);
//    ptr=add_at_end(ptr,43);
//    ptr=add_at_end(ptr,14);
//    ptr=add_at_end(ptr,13);
//    head=del_at_end(head);
//    ptr=head;
   
//    while (ptr!=NULL)
//    {
//       printf("%d\t",ptr->data);
//       ptr=ptr->link;
//    }
//    printf("\n");
// }

// deleteing at a certain position :)

struct node *del_at_pos(struct node *ptr,int pos)
{
   struct node *temp1,*temp2;
   temp1=ptr;
   temp2=ptr;

   while(pos!=1)
   {
      temp1=temp2;
      temp2=temp2->link;
      pos--;
   }
   temp1->link=temp2->link;
   free(temp2);
   temp2=NULL;
   return ptr;
}

int main()
{
   struct node *head = malloc(sizeof(struct node));
   head->data=45;
   head->link=NULL;

   struct node *ptr=head;
   ptr=add_at_end(ptr,89);
   ptr=add_at_end(ptr,18);
   ptr=add_at_end(ptr,24);
   ptr=add_at_end(ptr,34);
   ptr=add_at_end(ptr,39);
   ptr=add_at_end(ptr,34);
   ptr=add_at_end(ptr,32);
   ptr=head;

   int pos;
   printf("enter the pos:");
   scanf("%d",&pos);

   ptr=del_at_pos(head,pos);

   while (ptr!=NULL)
   {
      printf("%d\t",ptr->data);
      ptr=ptr->link;
   }
   printf("\n");
   return 0;
}