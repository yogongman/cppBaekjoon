#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,tmp;
    int answer=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    sort(arr,arr+n);
    int start,end;
    start=0;
    end = n-1;
    while(1){
        if(start>=end) break;
        tmp = arr[start] + arr[end];
        if(tmp == x){
            start++;
            end --;
            answer++;
        }
        else if(tmp>x) end--;
        else start++;
    }
    cout<<answer;
}


// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     vector<int> arr;
//     int n,x,tmp;
//     cin>>n;
//     int ans=0;
//     for(int i=0; i<n; i++){
//         cin>>tmp;
//         arr[tmp]++;
//     }
//     cin>>x;
//     for(int i=1; i<1000001; i++){
//         if(arr[i]){
//             if(arr[13-i]){
//                 ans++;
//             }
//         }
//     }
//     cout<<ans/2;

// 범위 초과

