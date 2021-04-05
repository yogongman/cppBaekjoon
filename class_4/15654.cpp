#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,m;
int arr[10];
bool used[10];
vector<int> a;
void bt(int k){
    if(k==m){
        for(int i=0; i<m; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=0; i<n; i++){
        if(!used[i]){
            arr[k] = a[i];
            used[i] = 1;
            bt(k+1);
            used[i] = 0;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tmp;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    bt(0);
    
}