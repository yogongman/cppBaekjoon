#include<iostream>
using namespace std;
int main(){
    int n,m,res = 0;
    int arr[1001];
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<m; j++){
            if(i%arr[j] == 0){
                res += i;
                break;
            }
        }
    }
    cout<<res;
    return 0;
}