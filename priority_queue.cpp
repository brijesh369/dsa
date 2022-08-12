#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    priority_queue<int> q;
    q.push(99);
    q.push(98);
    q.push(97);
    q.push(96);
    q.push(95);
    q.push(100);
    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();
    }
    return 0;
 }