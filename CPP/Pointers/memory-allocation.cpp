#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
   int *ptr_val {nullptr};//this is a null pointer
   cout<<"the sizeof(*int)="<<sizeof(int*)<<endl;
   cout<<"the sizeof(ptr_val)="<<sizeof(ptr_val)<<endl;

   cout<<"address of ptr_val="<<&ptr_val<<endl;
   
}