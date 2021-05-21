#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,tmp;
    cin >> n;
    stack<pair<int,int>> ip;
    for(int i=1; i<=n; i++){
        cin>>tmp;
        while(!ip.empty()){
            if(tmp<ip.top().first){
                cout<<ip.top().second<<" ";//새로운 신호탑이 더 높을경우 기존의 신호탑이 낮으면 다 쳐냄.
                break;
            }
            ip.pop();
        }
        if(ip.empty()){
            cout<<"0"<<" ";
        }
        ip.push(make_pair(tmp,i));
    }
    
}