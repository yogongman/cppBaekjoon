#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int>a, pair<int,int>b){
    if(a.second == b.second) return a.first<b.first;
    else return a.second<b.second;
}
int main(){
    vector<pair<int, int>> v;
    int num,a,b,cnt=0;
    int tmp_second;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    tmp_second = 0;
    sort(v.begin(),v.end(),compare);
    for(int i=0; i<num; i++){
        if(v[i].first>=tmp_second){
            cnt++;
            tmp_second = v[i].second;
        }
    }
    cout<<cnt;
    return 0;
}