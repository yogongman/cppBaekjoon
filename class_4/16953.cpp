#include<bits/stdc++.h>
using namespace std;
long long a,b;
int ans = -1;
queue<pair<long,long>> Q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a>>b;
    Q.push({a,1});
    while(!Q.empty()){
        long long cur = Q.front().first;
        long long cnt = Q.front().second;
        Q.pop();
        if(cur == b){
            ans = cnt;
        }
        cout<<cur<<"\n";
        long long g = cur*2;
        long long o = cur*10+1;
        if(g<=b){
            Q.push({g,cnt+1});
        }
        if(o<=b){
            Q.push({o,cnt+1});
        }
    }
    cout<<ans;
    
}