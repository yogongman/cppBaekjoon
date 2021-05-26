#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
   string a;
   stack<char> st;
   int num=1;
   while(1){
       int cnt=0;
       cin>>a;
       for(auto i: a){
           if(i=='-') return 0;
           else if(i=='{'){
               st.push(i);
           }
           else if(i=='}'){
               if(!st.empty() && st.top()=='{'){
                   st.pop();
               }
               else st.push(i);
           }
       }
       while(!st.empty()){
           char t = st.top();
           st.pop();
           if(t!=st.top()){
               cnt+=2;
           }
           else cnt+=1;
           st.pop();
       }
       cout<<num<<". "<<cnt<<"\n";
       num++;
   }
}  