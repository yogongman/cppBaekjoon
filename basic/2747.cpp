#include<iostream>
using namespace std;
int arr[46] = {0, };
int fb(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    if(arr[n] != 0) return arr[n];
    arr[n] = fb(n-1) + fb(n-2);
    return arr[n];
}
int main(){
    int n,ex=0,res=1;
    cin>>n;
    cout<<fb(n);
    return 0;
}