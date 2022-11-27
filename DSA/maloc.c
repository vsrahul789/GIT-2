#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    printf("Enter the number n: ");
    scanf("%d",&n);
    int *ptr = (int *) malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("memory insufficient");
        EXIT_FAILURE;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",ptr[i]+100);
    }
    printf("\n");
    return 0;

}
