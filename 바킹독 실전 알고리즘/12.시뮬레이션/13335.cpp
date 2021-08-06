#include<bits/stdc++.h>
using namespace std;
int n,w,l;
int cnt;
queue<int> q;
int arr[1001];
bool done;
int main(){
    cin>>n>>w>>l;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    int tot = 0;
    for(int i=0; i<n; i++){
          while(1){
              if(q.size() == w){ // q가 꽉차면 (다리가 가득차면)
                  tot -= q.front(); q.pop();
              }
              if(tot + arr[i] <= l) break; //현재 다리 안에 무게가 최대보다 작으면 
              q.push(0);
              cnt++;
          }
          q.push(arr[i]);
          tot+=arr[i];
          cnt++;
    }
    cnt+=w;
    cout<<cnt;
}