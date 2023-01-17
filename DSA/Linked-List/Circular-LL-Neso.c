#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *tail;
struct node *head;

struct node *addToEmpty(int data)
{
    struct node *temp=malloc(sizeof(struct node *));
    temp->data=data;
    temp->next=temp;

    return temp;

}

struct node *addAtBeg(struct node *tail,int data)
{
    struct node *ptr=malloc(sizeof(struct node *));
    ptr->data=data;
    ptr->next=tail->next;
    tail->next=ptr;

    return tail;

}

struct node *addAtEnd(struct node *tail,int data)
{
    struct node *temp1=malloc(sizeof(struct node *));
    struct node *temp=tail->next;
    temp1->data=data;
    // ptr->next=tail;
    temp1->next=temp;
    tail->next=temp1;
    tail=temp1;

    return tail;
    
}

struct node *addAtPos(struct node *tail,int data,int pos)
{
    struct node *temp1=malloc(sizeof(struct node *));
    struct node *temp=tail->next;
    temp1->data=data;
    
    while (pos!=1)
    {
        temp=temp->next;
        pos--;
    }
    temp1->next=temp->next;
    temp->next=temp1;

return tail;
    
}

int main()
{
    tail=addToEmpty(1);
    printf("the tail element:%d\n",tail->data);

    //Add At Begining

    // struct node *ptr=tail;
    // ptr=addAtBeg(tail,2);
    // ptr=addAtBeg(ptr,3);
    // ptr=addAtBeg(ptr,4);
    // ptr=tail->next;

    // do{
    //     printf("%d\t",ptr->data);
    //     ptr=ptr->next;
    // }while(tail->next!=ptr);

    // printf("\n");

    //Add At End


    struct node *ptr;
    tail=addAtEnd(tail,2);
    tail=addAtEnd(tail,3);
    tail=addAtEnd(tail,4);
    tail=addAtEnd(tail,5);
    tail=addAtEnd(tail,6);
    tail=addAtEnd(tail,7);
    tail=addAtEnd(tail,8);
    tail=addAtEnd(tail,9);
    tail=addAtEnd(tail,10);

//Add at position:)
    // struct node *ptr;

    tail=addAtPos(tail,5,3);
    tail=addAtPos(tail,8,7);
    tail=addAtPos(tail,11,4);
    ptr=tail->next;

    do{
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }while (ptr!=tail->next);

    printf("\n");

    return 0;
}