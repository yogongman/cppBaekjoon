#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        string ex;
        stack<char> ans;
        bool isValid  = true;
        getline(cin,ex);
        if(ex==".") break;
        for(auto i: ex){
            if(i=='('||i=='['){
                ans.push(i);
            }
            else if(i==')'){
                if(ans.empty()||ans.top()!='('){
                    isValid = false;
                    break;
                }
                ans.pop();
            }
            else if(i==']'){
                if(ans.empty()||ans.top()!='['){
                    isValid = false;
                    break;
                }
                ans.pop();
            }
        }
        if(!ans.empty()) isValid=false;
        if(isValid) cout<<"yes\n";
        else cout<<"no\n";
    }
}