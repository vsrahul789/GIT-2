#include <cctype>
#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;


//using isalnum() function
bool my_isalnum(char ch) 
{
    return isalnum(ch);
}

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
  char ch;
  int choice;
//   char str[200];

  
  char str[200];
//   char ch;
 

  cout<<"enter the choice 1.isalnum 2.isblank:"<<endl;
  cin>>choice;
  switch (choice)
  {
  case 1:
    
    std::cout << "enter the sentence:\n" << std::endl;
//   std::cin >> s;
//   char* gets( char* str );
    gets(str);
    std::cout << str<<endl;
    int count = my_isblank(str);
    cout<<"no of blank characters are : "<<count;
    break;
    break;

    case 2:
    cout << "enter the character" << endl;
    cin >> ch;

    bool ans = my_isalnum(ch);

    if (ans == true) {
      cout << ch << " is a alpha numeric charecter"<<endl;
    } else {
      cout << ch << " is not a alpha numeric charecter"<<endl;
    }
  
//   default:
//   cout<<"unidentified choice";
//     break;
  }
}