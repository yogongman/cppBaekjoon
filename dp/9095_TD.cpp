#include<iostream>
using namespace std;
int arr[12];
int dp(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 4;
    if(arr[n]>0) return arr[n];
    arr[n] = dp(n-1) + dp(n-2) + dp(n-3);
    return arr[n];

}
int main(){
    int n;
    cin>>n;
    int tmp;
    for(int i=0; i<n; i++){
        fill(arr,arr+12,0);
        cin>>tmp;
        cout<<dp(tmp)<<"\n";
    }
    return 0;
}