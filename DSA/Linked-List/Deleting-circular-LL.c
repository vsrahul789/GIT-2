#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

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


struct node *delAtBeg(struct node *tail)
{
    struct node *temp=tail->next;
    tail->next=temp->next;
    printf("the deleted item is:%d\n",temp->data);
    free(temp);
    temp=NULL;

    return tail;
}

struct node *delAtEnd(struct node *tail)
{
    struct node *temp=tail->next;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    tail=temp;
    temp=temp->next;
    tail->next=temp->next;
    free(temp);
    temp=NULL;

    return tail;
}

struct node *delAtPos(struct node *tail,int pos)
{
    struct node *temp=tail->next;
    struct node *temp1;
    int i;
    // while (pos>2)
    // {
    //     temp=temp->next;
    //     pos--;
    // }
    for(i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
    temp1=NULL;

    return tail;
}

int main()
{
    struct node *tail=malloc(sizeof(struct node *));
    tail->data=1;
    tail->next=tail;

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

    ptr=tail->next;

    do{
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }while (ptr!=tail->next);

    printf("\n");

//deleting at beg:)

    // tail=delAtBeg(tail);
    // tail=delAtBeg(tail);
    // tail=delAtBeg(tail);
    // tail=delAtBeg(tail);
    // ptr=tail->next;
    // do{
    //     printf("%d\t",ptr->data);
    //     ptr=ptr->next;
    // }while (ptr!=tail->next);

    // printf("\n");

//Delete at end
    
    // tail=delAtEnd(tail);
    // tail=delAtEnd(tail);
    // tail=delAtEnd(tail);
    // tail=delAtEnd(tail);
    
    // ptr=tail->next;
    // do{
    //     printf("%d\t",ptr->data);
    //     ptr=ptr->next;
    // }while (ptr!=tail->next);
    // printf("\n");

//delete at position
    
    tail=delAtPos(tail,5);
    ptr=tail->next;
    do{
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }while (ptr!=tail->next);
    printf("\n");

    return 0;

}