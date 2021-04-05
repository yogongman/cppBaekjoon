#include<iostream>
using namespace std;
int n,m;
int arr[9];
bool isused[9];
void bt(int num, int k){
    if(k==m){
        for(int i=0; i<m; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=num; i<=n; i++){
        if(!isused[i]){
            arr[k] = i;
            isused[i] = 1;
            bt(i+1,k+1);
            isused[i] = 0;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    bt(1,0);
}