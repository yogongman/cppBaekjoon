#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r=0;
    int tmp1, tmp2;
    int n,k;
    int s[2][6]={0,};
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>tmp1>>tmp2;
        s[tmp1][tmp2-1]++;
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<6; j++){
            r += s[i][j]/k;
            if(s[i][j] % k != 0){
                r++;
            }
        }
    }
    cout<<r;

}