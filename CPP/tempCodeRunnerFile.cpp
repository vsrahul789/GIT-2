#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
   bool temp_var=true;
   cout<<temp_var<<endl;
   cout<<sizeof(bool)<<endl;
   
   int a {32};
   int b {30};

   cout<<boolalpha<<endl;
   cout<< " a<=b " << (a<=b)<<endl;
   cout <<sizeof(a)<<endl<<endl<<endl;

   double a1 = 7.60937;
   cout<<round(a1)<<endl;
   cout<<floor(a1)<<endl;
   cout<<ceil(a1)<<endl;
}