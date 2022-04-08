#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int m,n;
    cin>>m>>n;
    bool a[1000001];
    fill_n(a, 1000001, true);
    a[1] = false;

    for(int i=2; i<=1000; i++){
        if(a[i]){
            for(int j = i*i; j<=1000000; j+=i){
                a[j] = false;
            }
        }
    }
    for(int i=m; i<=n; i++){
        if(a[i]) cout<<i<<"\n";
    }
    return 0;
}