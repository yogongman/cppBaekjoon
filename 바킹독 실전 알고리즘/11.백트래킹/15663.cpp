#include<bits/stdc++.h>
using namespace std;
vector<int> arr(10);
int a[10];
bool isused[10];
int n,m;
void func(int k){
    if(k==m){
        for(int i=0; i<m; i++){
          cout<<a[i]<<" ";  
        }
        cout<<"\n";
        return;
    }
    int pre = -1;
    for(int i=0; i<n; i++){
        if(!isused[i] && ( pre != arr[i])){
            pre = arr[i];
            isused[i] = 1;
            a[k]=arr[i];
            func(k+1);
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

    sort(arr.begin(),arr.begin()+n);
    func(0);
}