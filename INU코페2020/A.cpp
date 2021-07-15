#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, X, K;
    int a,b;
    cin>>N>>X>>K;
    while(K--){
        cin>>a>>b;
        if(a == X){
            X=b;
        }
        else if(b == X){
            X=a;
        }
    }
    cout<<X;
}