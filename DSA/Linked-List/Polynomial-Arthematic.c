#include<stdio.h>
#include<stdlib.h>

struct node {
    int coeff;
    int expo;
    struct node *next;
};


//creating a node in linked list:)

// struct node *create(struct node *head,int coeff,int exp)
// {
//     struct node *temp=malloc(sizeof(struct node *));
//     temp->coeff=coeff;
//     temp->exp=exp;
//     temp->next=NULL;

//     head=temp;
//     return head;
// }

// struct node *insert(struct node *head,int coeff,int expo)
// {
//     struct node *temp1=malloc(sizeof(struct node *));
//     temp1->coeff=coeff;
//     temp1->expo=expo;
//     temp1->next=NULL;
//     if(temp1->expo > head->expo)
//     {
//         temp1->next=head;
//         head=temp1;
//         return head;
//     }else if(head->expo == temp1->expo){
//         head->expo=head->expo+temp1->expo;
//         return head;
//     }else {
//         struct node *temp=head;
//         while(temp->next!=NULL)
//         {
//             if(temp1->expo > temp->next->expo)
//             {
//                 temp1->next=temp->next;
//                 temp->next=temp1;
//                 return head;
//             }else if(temp->next->expo == temp1->expo){
//                 temp->next->coeff=temp->next->coeff + temp1->coeff;
//                 return head;
//             }else{
//                 temp=temp->next;
//             }
//         }
//     }
// }

struct node *insert(struct node *head,int coeff,int expo)
{
    struct node *temp1=malloc(sizeof(struct node *));
    temp1->coeff=coeff;
    temp1->expo=expo;
    temp1->next=NULL;
    
    if(head==NULL || temp1->expo > head->expo)
    {
        temp1->next=head;
        head=temp1;
        return head;
    }
    struct node *temp=head;
    while(temp->next!=NULL && temp->next->expo > temp1->expo)
    {
        temp=temp->next;
        if(temp->expo == temp1->expo)
        {
            temp->coeff= temp->coeff+temp1->coeff;
            return head;
        }
    }
    temp1->next=temp->next;
    temp->next=temp1;
    return head;
}

int main()
{
    struct node *head=malloc(sizeof(struct node *));
    head->coeff=10;
    head->expo=5;
    head->next=NULL;

    printf("the head elements is:\n");
    printf("%d * (x) ^ %d\n",head->coeff,head->expo);

    struct node *ptr;

    head=insert(head,10,8);
    head=insert(head,19,4);
    head=insert(head,3,5);
    head=insert(head,8,1);
    head=insert(head,3,0);
    ptr=head;

    while(ptr!=NULL)
    {
        printf("%d * (x)^%d + ",ptr->coeff,ptr->expo);
        ptr=ptr->next;
    }
    printf("0 \n");

    return 0;
}