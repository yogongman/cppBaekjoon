#include<bits/stdc++.h>
using namespace std;
int op[4];
int arr[12];
int a[11];
int n;
int mx=-1000000001, mn=1000000001;
int used[4];
void func(int k){
    if(k == n-1){
        int ret = arr[0];
        for(int i=0; i<k; i++){
            if(a[i] == 0){
                ret += arr[i+1];
            }
            else if(a[i] == 1){
                ret -= arr[i+1];
            }
            else if(a[i] == 2){
                ret *= arr[i+1];
            }
            else{
                ret /= arr[i+1];
            }
            // cout<<a[i]<<" ";
        }
        // cout<<"\n";
        // cout<<ret<<"\n";
        mx = max(mx, ret);
        mn = min(mn, ret);
    }
    for(int i=0; i<4; i++){
        if(used[i]>=op[i]) continue;
        a[k] = i;
        used[i]++;
        func(k+1);
        used[i]--;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<4; i++){
        cin>>op[i];
    }
    func(0);
    cout<<mx<<"\n"<<mn;
}