#include<bits/stdc++.h>
using namespace std;
int n,m;
long long arr[1001];
pair<long long, long long> a[2];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long sum,ans=0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //swap
    for(int j=0; j<m; j++){
        a[0].first = 1001;
        a[0].second = 9223372036854775803;
        a[1].first = 1001;
        a[1].second = 9223372036854775803;
        for(int i=0; i<n; i++){
            long long tmp = 0;
            long long tmpn = 0;
            if(arr[i]<=a[0].second){
                a[0].first = i;
                a[0].second = arr[i];
                if(a[0].second <= a[1].second){
                    tmp = a[1].second;
                    tmpn = a[1].first;
                    a[1].second = a[0].second;
                    a[0].second = tmp;
                    a[1].first = a[0].first;
                    a[0].first = tmpn;
                } 
            }

        }
        // for(int i=0; i<n; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<"\n";
        sum = a[0].second + a[1].second;
        arr[a[0].first] = sum;
        arr[a[1].first] = sum;
    }
    for(int i=0; i<n; i++){
        ans += arr[i];
    }
    cout<<ans;
}
// 자료형때문에 틀렸었음