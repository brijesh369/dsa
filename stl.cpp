#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> vec;
    vec={'a','b','c','d','e'};
    cout<<vec.at(1);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<endl;
    }
    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
    }
    vector<char>::iterator itr;
    itr=vec.begin()+3;
    cout<<*itr<<endl;
    vector<int> integer(9);
    for(int j=0;j<integer.size();j++){
    cout<<integer.at(j)<<" ";
    }cout<<endl;
    auto a=10;
    cout<<a<<endl;
    auto b='c';
    cout<<b<<endl;
    return 0;
}