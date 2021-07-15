#include<bits/stdc++.h>
using namespace std;
string p[1001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int cnt=0;
    int pn;
    string ps,tmp;
    cin>>N>>ps;
    for(int i=0; i<N; i++){
        cin>>tmp>>p[i];
        if(tmp == ps){
            pn = i;
        }
    }
    int a = pn;
    while(pn--){
        if(p[pn] == p[a]) cnt++;
    }
    cout<<cnt;
    
}