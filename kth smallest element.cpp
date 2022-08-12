#include<bits/stdc++.h>
using namespace std;
void kthSmallestElement(vector<int>& vec,int n,int k){
    priority_queue<int> q;
   for(int i=0;i<n;i++){
    q.push(vec[i]);
    if(q.size()>k){
        q.pop();
    }
   }
   cout<<q.top()<<endl;
}
int main(){
    vector<int> vec;
    
    int n; cin>>n;int k;cin>>k;
   
    
    for(int i=0;i<n;i++){
        cin>>vec[i];
    } 
    kthSmallestElement(vec,n,k);
}