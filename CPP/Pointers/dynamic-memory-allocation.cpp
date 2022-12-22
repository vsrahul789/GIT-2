#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
   int *ptr_value{nullptr};
   ptr_value=new int; //allocates a memory block for ptr_value

   cout<<"ptr_value after declaring and assisning nothing"<<*ptr_value<<endl;//the system stores garbage value in ptr;
   *ptr_value=12;

   cout<<"ptr_value after declaring and assisning 12"<<*ptr_value<<endl;//system stores 12 in ptr as initialised;

   delete(ptr_value);
   ptr_value=nullptr;

   cout<<"ptr_value after deleteing the value"<<ptr_value<<endl;//initialised to 0 since it is assigned with nullptr;

   
}

// int main()
// {
//    int *ptr1 {new int {83}};
//    int *ptr2=ptr1;
//    cout<<"ptr1="<<ptr1<<"\t *ptr1="<<*ptr1<<endl;
//    cout<<"ptr2="<<ptr2<<"\t *ptr2="<<*ptr2<<endl;
// }
//the above initialisation is bad practice since it is pointing to same address:)