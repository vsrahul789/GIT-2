#include <cctype>
#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;

int my_isblank(char str[])
{
    int i,blank=0;
    char c;
    for(i=0;str[i]!=0;i++)
    {
        if(isblank(str[i]))
        {
            blank++;
        }
    }
    return blank;
}

int main() {
  char str[200];
//   char ch;
  std::cout << "enter the sentence:\n" << std::endl;
//   std::cin >> s;
//   char* gets( char* str );
  gets(str);
  std::cout << str<<endl;
  int count = my_isblank(str);
  cout<<"no of blank characters are : "<<count;
}