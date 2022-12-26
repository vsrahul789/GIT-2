#include<iostream>

using namespace std;

int main()
{
    int age {20};
    int & ref_age {age};

    cout<<"age:"<<age<<"\t&age:"<<&age<<endl;
    cout<<"ref_age:"<<ref_age<<"\t&ref_age:"<<&ref_age<<endl;
    //const

    int age1 {20};
    const int & ref_age1 {age1};
    age1++;
    cout<<"age1:"<<age1<<"\t&age1:"<<&age1<<endl;
    cout<<"ref_age1:"<<ref_age1<<"&\tref_age1:"<<&ref_age1<<endl;
    return 0;

}