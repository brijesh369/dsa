/*#include<bits/stdc++.h>
using namespace std;

int fACTORIAL(int k){
    if(k==0){
        return 1;
    }
    int temp=(k*fACTORIAL(k-1));
    return temp;
}
int main(){
    int n;
    cin>>n;
    long long int x= fACTORIAL(n);
    cout<<x<<endl;
    int b= x/10;
    string s=to_string(x);
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}*/
#include <iostream>
using namespace std;
int countTrailingzeros(int n){
    int count=0;
    for(int x=5;n/x>=1;x*=5){
        count+=n/x;
    }
    return count; 
}
int main() {
   int n ;cin>>n;
  /* int count = 0;
   for (int i = 5; n / i >= 1; i *= 5)
      count += n / i;
   cout<<"No of trailing 0s in " << n<< "! is " << count;*/
   cout<<"No of trailing 0s in "<< n <<" "<< "is" << " "<< countTrailingzeros(n)  <<endl;
   return 0;
}