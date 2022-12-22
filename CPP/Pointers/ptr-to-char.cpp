#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
   const char *ptr_value{"Hello! World."};
   cout<<"ptr_value"<<ptr_value<<endl;

   cout<<"*ptr_value"<<*ptr_value<<endl;

   /* *ptr_value='B'; u will get error if u use this type of statement

   cout<<"*ptr_value"<<*ptr_value<<endl;  */

}