#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,tmp,cnt;

    cin>>n;     
     vector<int>a(n);                                          
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    sort(a.begin(),a.end());
    cin>>m;
    vector<int>c(m);
    for(int i=0; i<m; i++){
        cin>>tmp;
        auto upper = upper_bound(a.begin(),a.end(),tmp);
        auto lower = lower_bound(a.begin(),a.end(),tmp);
        c[i] = upper-lower;
    }
    for(int i=0; i<m; i++){
        cout<<c[i]<<" ";
    }
    return 0;
}