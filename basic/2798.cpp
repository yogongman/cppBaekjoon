#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,max=0;
    cin >> n>>m;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(i==j||i==k||j==k) break;
                if(max<(a[i]+a[j]+a[k])&&(a[i]+a[j]+a[k])<=m) max = a[i]+a[j]+a[k];
            }
        }
    }
    cout<<max;
    return 0;
}