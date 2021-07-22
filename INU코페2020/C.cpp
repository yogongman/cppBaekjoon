#include<bits/stdc++.h>
using namespace std;
int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int x,y;
    int ans = 0;
    cin>>x>>y;
    if(x<=y){
        ans+=x;
        ans+=y;
        ans+=x/10;
    }
    else{
        ans+=y;
        ans+=x;
        ans+=y/10;
    }
    cout<<ans;
}       