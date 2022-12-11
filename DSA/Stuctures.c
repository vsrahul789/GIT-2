//  1. Returning a structure variable from a function
#include<stdio.h>
#include<stdlib.h>

// struct point{
//    int b;
//    int a;
// };
// struct point edit(struct point p)
// {
//    p.b++;
//    p.a=p.a+5;
//    return p;
// }
// void print(struct point p)
// {
//    printf("%d %d\n",p.b,p.a);
// }
// int main()
// {
//    struct point p1={23,43};
//    struct point p2={24,44};
//    p1=edit(p1);
//    p2=edit(p2);
//    print(p1);
//    print(p2);
// }

// 2.  Returning a pointer to a structure from a function

// struct point{
//    int x;
//    int y;
// };
// struct point * func(int a,int b){
//    struct point *ptr = (struct point *)malloc(sizeof(struct point));
//    ptr->x=a;
//    ptr->y=b*ptr->x;
//    return ptr;
// }
// void print(struct point *p){
//    printf("%d %d\n",p->x,p->y);
// }
// void main(){
//    struct point *p1,*p2;
//    p1=func(2,3);
//    p2=func(3,6);
//    print(p1);
//    print(p2);
//    free(p1);
//    free(p2);
//    p1=NULL;
//    p2=NULL;
// }

// 3.passing Array of structure as argument

// struct point 
// {
//    int x;
//    int y;
// };

// void print(struct point arr[])
// {
//    int i;
//    for ( i = 0; i < 2; i++)
//    {
//       printf("%d %d\n",arr[i].x,arr[i].y);
//    }
// }

// int main()
// {
//    struct point arr[2]={{2,3},{4,5}};
//    print(arr);
//    return 0;
// }

// 4. self referential structures

struct code
{
   // int roll_no;
   int i;
   char c;
   struct code *ptr;
};
// struct code print(struct code var){
//    // var.roll_no=15;
//    var.i=2;
//    var.c=b;
// }
int main(){
   struct code var1,var2;
   // var1=print(var1);
   var1.i=2;
   var1.c='j';
   var1.ptr=NULL;

   var2.i=5;
   var2.c='h';
   var2.ptr=NULL;

   var1.ptr=&var2;

   printf("%d %c\n",var1.ptr->i,var1.ptr->c);
}