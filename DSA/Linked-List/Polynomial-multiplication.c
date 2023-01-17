#include<stdio.h>
#include<stdlib.h>

struct node{
    int coeff;
    int expo;
    struct node *link;
};

struct node *create(struct node *head)
{
    // struct node *temp=NULL;
    int n;
    int i,co,ex;
    printf("Enter the number of terms:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the coefficient of term %d",i+1);
        scanf("%d",&co);

        printf("enter the exponent of term %d:",i+1);
        scanf("%d",&ex);

        head=insert(head,co,ex);
    }
    return head;
}

struct node *insert(struct node *head,int coeff,int expo)
{
    struct node *temp1=malloc(sizeof(struct node *));
    temp1->coeff=coeff;
    temp1->expo=expo;
    temp1->link=NULL;
    
    if(head==NULL || temp1->expo > head->expo)
    {
        temp1->link=head;
        head=temp1;
        return head;
    }
    struct node *temp=head;
    while(temp->link!=NULL && temp->link->expo > temp1->expo)
    {
        temp=temp->link;
        if(temp->expo == temp1->expo)
        {
            temp->coeff= temp->coeff+temp1->coeff;
            return head;
        }
    }
    temp1->link=temp->link;
    temp->link=temp1;
    return head;
}


int main()
{
    struct node *head1=NULL;
    struct node *head2=NULL;
    head1=create(head1);
    head2=create(head2);
    // print();
    return 0;
}

void print(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d * (x)^%d",ptr->coeff,ptr->expo);
        ptr=ptr->link;
        if(ptr!=NULL)
        {
            printf(" + ");
        }else{
            printf("\n");
        }
    }
    printf("welcome:)");
}