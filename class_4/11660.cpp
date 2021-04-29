#include<iostream>
using namespace std;
int arr[1025][1025];
int sum[1025][1025];
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int x1,x2,y1,y2;
    int tmp;
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){ 
            cin>>tmp;
            arr[j][i] = tmp;
            sum[j][i] = arr[j][i]+sum[j-1][i]+sum[j][i-1]-sum[j-1][i-1];
        }
    }
    for(int i=0; i<m; i++){
        cin>>x1>>y1>>x2>>y2;
        cout<<sum[y2][x2]-sum[y1-1][x2]-sum[y2][x1-1]+sum[y1-1][x1-1]<<"\n";
    }
}