#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<string> st;
    st.push("lion");
    st.push("tiger");
    st.push("apple");
    st.push("monkey");
    st.push("bat");
    st.push("cat");
    st.push("dog");deque<string> qstr;
    while(!st.empty()){
       qstr.push_back(st.top());
       st.pop();

    }
    while(!qstr.empty()){
          cout<<qstr.back()<<endl;
          qstr.pop_back();
    }
    return 0;
}
