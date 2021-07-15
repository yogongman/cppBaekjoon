#include<bits/stdc++.h>
using namespace std;
int N;
int arr[11];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin>>N>>k;
    int cnt=0;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    for(int i=N-1; i>=0; i--){
        if(arr[i]>k) continue;
        while(k>=0){
            if(arr[i]>k) break;
            k-=arr[i];
            cnt++;
        }
    }
    cout<<cnt;
}