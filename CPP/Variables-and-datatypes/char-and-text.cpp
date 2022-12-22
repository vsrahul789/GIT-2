#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
   char ch {65};
   cout<< ch <<endl;
   cout<< static_cast<int>(ch)<<endl;//turn ch into int format and use as int data type;
}