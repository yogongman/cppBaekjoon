#include<bits/stdc++.h>
using namespace std;
int board[21][21];
int n;
int a[21];
bool isused[21];
int mn = 100000000;
void func(int num,int k){
    if(k == n/2){
        int start=0, link=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isused[i] && isused[j]) start += board[j][i];
                if(!isused[i] && !isused[j]) link += board[j][i];
            }
        }
        int tmp = abs(start-link);
        mn = min(mn,tmp);
    }
    for(int i=num; i<n-1; i++){
        if(!isused[i]){
            isused[i] = 1;
            func(i+1,k+1);
            isused[i] = 0;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>board[j][i];
        }
    }
    func(0,0);
    cout<<mn;
}