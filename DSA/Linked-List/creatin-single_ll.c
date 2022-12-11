#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *link;
};
int main()
{
   // struct node *head=NULL;
   // head=(struct node *)malloc(sizeof(struct node));
   // head->data=45;
   // head->link=NULL;
   // printf("%d\t\n",head->data);

   struct node *head=malloc(sizeof(struct node));
   head->data=28;
   head->link=NULL;
   printf("%d\t\n",head->data);

   struct node *current=malloc(sizeof(struct node));
   current->data=32;
   current->link=NULL;
   head->link=current;
   printf("%d\t\n",current->data);

   current=malloc(sizeof(struct node));
   current->data=200;
   current->link=NULL;
   head->link->link=current;
   printf("%d\t\n",current->data);
}