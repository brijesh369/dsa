#include <bits/stdc++.h>
using namespace std;
int main()
{
    char *x = new char('g');
    int *d = new int(99);
    float *o = new float(90.63);
    char *ad = new char('v');
    cout << *o << endl;
    cout << *x << endl;
    cout << x << endl;
    cout << o << endl;
    cout << x << endl;
    cout << *ad << endl;
    cout << ad << endl;
    string *s = new string("BRIJESH");

    cout << s << endl;
    cout << *s << endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(long long int)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(long long)<<endl;
    cout<<sizeof(long long )<<endl;
    int b=99;
    int* a=&b;
    cout<<a<<endl;
    cout<<a+1<<endl;
    cout<<a+2<<endl;
    cout<<a+3<<endl;
}