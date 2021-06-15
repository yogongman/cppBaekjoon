#include<bits/stdc++.h>
using namespace std;
queue<pair<int,int>> Q; // first  = n , second = time;
int fir[500001][2]; // 1 = 홀수, 0 = 짝수 # input => 최초 시간
int n,k,t;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    memset(fir,-1,sizeof(fir));
    Q.push({n,0});
    fir[n][0] = 0;
    while(!Q.empty()){
        int tt = 0;

        auto cur = Q.front(); Q.pop();
        int curn = cur.first;
        int curt = cur.second;
        tt = curt*(curt+1)/2;
        if(fir[curn][curt%2] == -1){
            fir[curn][curt%2] = curt;
        }
        // cout<<cur.first<<" "<<cur.second<<" "<<curt%2<<" "<<fir[curn][curt%2]<<" "<<tt+k<<"\n";
        if(k+tt>500000) continue;
        if(k+tt == curn || fir[k+tt][curt%2] != -1){
            cout<<fir[curn][curt%2];
            return 0;
        }
        int b,f,tp;
        tp = curn * 2;
        b = curn - 1;
        f = curn + 1;
        if(tp<=500000 && fir[tp][(curt+1)%2] == -1){
            Q.push({tp,curt+1});
            fir[tp][(curt+1)%2] = curt+1;
        }
        if(b>=0 && fir[b][(curt+1)%2] == -1){
            Q.push({b,curt+1});
            fir[b][(curt+1)%2] = curt+1;
        }
        if(f<=500000 && fir[f][(curt+1)%2] == -1){
            Q.push({f,curt+1});
            fir[f][(curt+1)%2] = curt+1;
        }

        t = cur.second+1;
    }

    cout<<-1;
}