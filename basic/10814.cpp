#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool com(pair<int, string>a, pair<int, string>b){
    if(a.first  == b.first) a.first > b.first;
    return a.first < b.first;
}
int main(){
    int n,tmpi;
    string tmps;
    cin >> n;
    vector<pair<int, string>> a; 
    for(int i=0; i<n; i++){
        cin>>tmpi>>tmps;
        a.push_back(make_pair(tmpi,tmps));
    }
    stable_sort(a.begin(),a.end(),com);
    for(int i=0; i<a.size(); i++){
        cout<<a[i].first<<" "<<a[i].second<<'\n';
    }
    return 0;
}