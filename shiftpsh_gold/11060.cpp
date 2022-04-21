#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int arr[1001];
int jp[1001];
queue<int> q;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    fill(jp,jp+1001,-1);
    q.push(0); // first = 인덱스
    jp[0] = 0;

    while(!q.empty()){
        int cur = q.front(); q.pop(); // 현재 인덱스
        for(int i=1; i<=arr[cur]; i++){
            if(cur+i>=n) break;
            if(jp[cur+i] == -1){
                jp[cur+i] = jp[cur] + 1;
                q.push(cur+i);
            }
            else{
                if(jp[cur+i] > jp[cur]+1){
                    jp[cur+i] = jp[cur] +1;
                    q.push(cur+i);
                }
            }
        }
    }
    // for(int i: jp){
    //     cout<<i<<" ";
    // }
    cout<<jp[n-1];

    return 0;

}