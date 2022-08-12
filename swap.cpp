#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
}
void swapp(int *a, int *b){
    int c=(*a)+(*b);
    *a= c-(*a);
    *b= c-(*a);
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    swapp(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}