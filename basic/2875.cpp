#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int mn;
    mn = min(n/2,m);
    mn = min(mn, (n+m-k)/3);
    cout<<mn;
    return 0;
}