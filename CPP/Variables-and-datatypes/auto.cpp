//auto datatype is used to make the compiler guess the type we are using based on the parameters

#include<iostream>
#include<typeinfo>
#include<stdlib.h>

using namespace std;

int main()
{
   int var1 = 25;
   auto var2 = 2.4f; //float
   auto var3 = 225l; //long
   auto var4 = 'e';
   // auto var5 = 223

   auto var5 = 24u; //unsigned int
   auto var6 = 24ul;//unsigned long
   auto var7 = 34ll;//long long

   cout << typeid(var1).name()<<endl;
   cout << typeid(var2).name()<<endl;
   cout << typeid(var3).name()<<endl;
   cout << typeid(var4).name()<<endl;
   cout << typeid(var5).name()<<endl;
   cout << typeid(var6).name()<<endl;
   cout << typeid(var7).name()<<endl;
}

// #include <iostream>
// #include <typeinfo>
// using namespace std;
 
// int main() {
//     double x = 12;
//     cout << "Type of x : " << typeid(x).name() << endl;
// }