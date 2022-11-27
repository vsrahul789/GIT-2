#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,m;
    printf("enter the first exicutable terms:\n");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(int));
    if (ptr == NULL)
    {
        printf("insufficient memory:)");
        EXIT_FAILURE;
    }

    for(i=0 ; i<n ; i++)
    {
        scanf("%d" , &ptr[i]);
    }
    for ( i=0; i<n; i++)
    {
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    printf("enter the another set of number of integer:");
    scanf("%d",&m);
    ptr = (int *)realloc(ptr ,(m+n)*sizeof(int));
    if(ptr ==  NULL)
    {
        printf("insufficient memory 2 :)");
        EXIT_FAILURE;
    }    
    for(i=0 ; i<m ; i++)
    {
        scanf("%d" , &ptr[i]);
    }
    for(i=0 ; i<m ; i++)
    {
        printf("%d\t" , ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}