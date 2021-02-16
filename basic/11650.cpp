#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool com(pair<int,int>a, pair<int,int>b){
    if(a.first==b.first){
       return a.second<b.second;
    }
    return a.first<b.first;
}
int main(){
    vector<pair<int,int>>x;
    int n,a,b;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        x.push_back(make_pair(a,b));

    }
    sort(x.begin(),x.end(),com);
    for(int i=0; i<n; i++){
        cout<<x[i].first<<" "<<x[i].second<<"\n";
    }

    return 0;
}