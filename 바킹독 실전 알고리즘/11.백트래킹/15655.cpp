#include<bits/stdc++.h>
using namespace std;
int arr[10];
int a[10];
bool isused[10];
int n,m;
void func(int num, int k){
    if(k==m){
        for(int i=0; i<m; i++){
          cout<<a[i]<<" ";  
        }
        cout<<"\n";
        return;
    }
    for(int i=num; i<n; i++){
        if(!isused[i]){
            isused[i] = 1;
            a[k]=arr[i];
            func(i+1,k+1);
            isused[i] = 0;
        }
    }

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    func(0,0);



}