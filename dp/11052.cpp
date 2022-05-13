#include<iostream>
#include<algorithm>
using namespace std;
int n;
int arr[1001];
int dpa[1001];
int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++){
        dpa[i] = arr[i];
        for(int j=1; j<=i/2; j++){
            dpa[i] = max(dpa[i-j] + dpa[j], dpa[i]);
        }
    }

    cout<<dpa[n];
    return 0;
}