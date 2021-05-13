#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,b;
    cin>>n;
    int tmp;
    int arr[202]={0,};
    for(int i=0; i<n; i++){
        cin>>tmp;
        arr[100+tmp]++;
    }
    cin>>b;
    cout<<arr[b+100];
    return 0;
}