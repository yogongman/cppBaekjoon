#include<bits/stdc++.h>
using namespace std;
bool desc(int a, int b){ 
  return a > b; 
} 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ans = 0;
    int arrA[51];
    int arrB[51];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arrA[i];
    }
    for(int i=0; i<n; i++){
        cin>>arrB[i];
    }
    sort(arrA,arrA+n);
    sort(arrB,arrB+n,desc);
    for(int i=0; i<n; i++){
        ans += arrA[i]*arrB[i];
    }
    cout<<ans;
}