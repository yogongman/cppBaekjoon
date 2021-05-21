#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> ex;
    stack<int>N;
    vector<char> ans;
    int n,tmp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>tmp;
        ex.push_back(tmp);
    }
    auto it = ex.begin();
    for(int i=1; i<=n; i++){
        N.push(i);
        ans.push_back('+');
        while(!N.empty()){
            if(*it != N.top()) break;
            else{
                N.pop();
                ans.push_back('-');
                it++;
            }
        }
    }
    if(N.empty()){
        for(auto i: ans){
            cout<<i<<"\n";
        }
    }
    else cout<<"NO";
}