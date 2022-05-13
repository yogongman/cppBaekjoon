#include<iostream>
using namespace std;
long long int arr[102];
long long int dp(int x){
    if(arr[x] != 0) return arr[x];
    arr[x] = dp(x-2) + dp(x-3);
    return arr[x];
}
int main(){
    int n;
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 1;

    cin>>n;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        cout<<dp(tmp-1)<<"\n";
    }
    return 0;
}