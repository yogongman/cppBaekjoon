#include<bits/stdc++.h>
using namespace std;
int a[8];
int arr[8];
int n,m;
bool isused[8];
void func(int k){
    if(k == m){
        for(int i=0; i<m; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=0; i<n; i++){
        arr[k] = a[i];
        func(k+1);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    func(0);
}