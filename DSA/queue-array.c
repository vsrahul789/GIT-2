#include<stdio.h>
#include<stdlib.h>

int f= -1;
int r= -1;
int i,n,ele;
//use this only when dequeueing:)
int a[20];

//check weather the queue is empty or not

// int isempty(int front, int rear)
// {
//     if(rear==-1 && front==-1)
//     {
//         printf("queue is empty");
//         return 1;
//     }
// }
    //enqueue operation;;;
// int enqueue(int ele,int a[])
// {
//     // int i,n;
//     for(r=0;r<n;r++)
//     {
//         a[r]=ele;
//         return a[r];
//     }
// }

// int main()
// {
//     // int front=-1,rear=-1;
//     // int ele,n,i;
//     printf("enter the number of elements:");
//     scanf("%d",&n);
//     int *a = malloc(n*sizeof(int));
//     // if(isempty(f,r)==1)
//     // {
//     //     exit(0);
//     // }
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&ele);
//         *(a+i)=enqueue(ele,a+i);
//     }
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
//     return 0;
// }

//dequeue operation


int dequeue()
{
    // f++;
    return a[f];
}

int main()
{
    printf("enter the number elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(r=0;r<n;r++)
    {
        scanf("%d",&a[r]);
    }
    // f=-1;
    r=n-1;
    int ch;
    // printf("%d")
    do
    {
        if(f==r)
        {
            f=-1;
            r=-1;
            printf("queue is empty:)");
            exit (0);
        }
        f++;
        a[f]=dequeue();
        printf("dequeued element is :%d",a[f]);
        
        printf("do you want to continue:");
        scanf("%d",&ch);
    }while(ch==0);
    for(f;f<=r;f++)
    {
    printf("%d",a[f]);
    }
    return 0;
}
