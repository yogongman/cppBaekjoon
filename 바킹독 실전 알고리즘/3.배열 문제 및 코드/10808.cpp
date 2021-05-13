#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string c;
    cin>>c;
    int arr[26]={0,};
    for(auto i:c){
        arr[i-'a']++;
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}