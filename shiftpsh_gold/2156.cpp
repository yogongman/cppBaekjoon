#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int n;
    int arr[10001];
    int d[10001];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    d[0] = arr[0];
    d[1] = arr[0]+arr[1];

    for(int i = 2; i<n; i++){
        d[i] = max(max(d[i-1], d[i-2] + arr[i]), d[i-3]+arr[i]+arr[i-1]);
    }
    cout<<d[n-1];

    return 0;
    

}
