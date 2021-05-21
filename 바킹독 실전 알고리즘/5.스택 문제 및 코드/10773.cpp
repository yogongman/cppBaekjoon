#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> a;
    int n,ans=0;
    cin>>n;
    int tmp;
    while(n--){
        cin>>tmp;
        if(!a.empty() && tmp==0){
            a.pop();
        }
        else{
            a.push(tmp);
        }
    }
    while(!a.empty()){
        ans+=a.top();
        a.pop();
    }
    cout<<ans;
}