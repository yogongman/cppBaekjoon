#include<bits/stdc++.h>
using namespace std;
int n,s,ans;
int arr[21];
void func(int num, int idx){ //idx는 개수, num은 합
    if(n == idx){
        if(num == s){
            ans++;
        }
        return;
    }
    func(num,idx+1);
    func(num+arr[idx],idx+1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>s;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    func(0,0);
    if(s == 0) ans--;
    cout<<ans;
}
