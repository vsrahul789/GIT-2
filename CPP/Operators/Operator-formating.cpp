#include<iostream>
#include<iomanip>
#include<ios>

using namespace std;

int main()
{
   cout<<std::right;
   cout<<"Movie Name" <<setw(15)<<"First part"<<setw(15)<<"Second part"<<setw(15)<<"Third part"<<endl;
   cout<<"John Wick" <<setw(15)<<"2014"<<setw(15)<<"2017"<<setw(15)<<"2019"<<endl;
   cout<<"John Wick" <<setw(15)<<"2014"<<setw(15)<<"2017"<<setw(15)<<"2019"<<endl;
   cout<<"John Wick" <<setw(15)<<"2014"<<setw(15)<<"2017"<<setw(15)<<"2019"<<endl;
   cout<<"John Wick" <<setw(15)<<"2014"<<setw(15)<<"2017"<<setw(15)<<"2019"<<endl;
  
  
   cout<<std::left;
   int col_width=20;
   cout<<setw(col_width)<<"Movie Name" <<setw(col_width)<<"First part"<<setw(col_width)<<"Second part"<<setw(col_width)<<"Third part"<<endl;
   cout<<setw(col_width)<<"John Wick" <<setw(col_width)<<"2014"<<setw(col_width)<<"2017"<<setw(col_width)<<"2019"<<endl;
   cout<<setw(col_width)<<"John Wick" <<setw(col_width)<<"2014"<<setw(col_width)<<"2017"<<setw(col_width)<<"2019"<<endl;
   cout<<setw(col_width)<<"John Wick" <<setw(col_width)<<"2014"<<setw(col_width)<<"2017"<<setw(col_width)<<"2019"<<endl;
   cout<<setw(col_width)<<"John Wick" <<setw(col_width)<<"2014"<<setw(col_width)<<"2017"<<setw(col_width)<<"2019"<<endl;

}