#include<iostream>
using namespace std;

int main()
{
    const int a=9;
    cout<<"the value of a is:"<<a<<endl;
    //a=10;
    cout<<"the value of a becomes:"<<a<<endl;
    int b=99;
    int c=38;
    int d= (a+b)*(b+c);
    cout<<d<<endl;
    return 0;
}