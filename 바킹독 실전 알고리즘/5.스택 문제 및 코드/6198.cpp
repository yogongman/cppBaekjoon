#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,tmp;
    long long int ans=0;
    cin>>n;
    stack<int> height;
    for(int i=0; i<n; i++){
        cin>>tmp;
        while(!height.empty()){
            if(height.top()>tmp){ // 옥상 볼 수 있는 경우
                ans+=height.size();
                break;
            }
            height.pop(); // 새로운게 더 높아 옥상 못보는 이전 건물 쳐내기
        }
        height.push(tmp);
    }
    cout<<ans;
}