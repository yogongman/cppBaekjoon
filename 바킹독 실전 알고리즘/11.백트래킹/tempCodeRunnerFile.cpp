#include<bits/stdc++.h>
using namespace std;
int n;
int cnt = 0;
bool isusedx[16]; //같은 x위치에 놓였는가?
bool isusedup[16]; //좌하단 -> 우상단  x+y가 일치
bool isuseddown[16]; //좌상단 -> 우하단 x-y가 일치

void func(int y){
    if(y == n){
        cnt++;
        return;
    }
    for(int i=0; i<n; i++){ //x 순회
        if(isusedx[i] || isusedup[i+y] || isuseddown[i-y+n-1]) continue;
        isusedx[i] = 1;
        isusedup[i+y] = 1;
        isuseddown[i-y+n-1] = 1;
        // cout<<i<<" "<<y;
        func(y+1);
        isusedx[i] = 0;
        isusedup[i+y] = 0;
        isuseddown[i-y+n-1] = 0;
    
    }

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    func(0);
    cout<<cnt;

    
}