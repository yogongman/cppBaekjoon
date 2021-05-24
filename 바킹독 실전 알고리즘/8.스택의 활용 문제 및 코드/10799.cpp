#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string inp;
    stack<char> a;
    int ans=0;
    cin>>inp;
    for(int i=0; i<inp.length(); i++){
        if(inp[i]=='(') a.push(inp[i]);
        else{
            if(inp[i-1] == '('){
                a.pop();
                ans+=a.size();
            }
            else{
                a.pop();
                ans++;
            }
        }
    }
    cout<<ans;
}