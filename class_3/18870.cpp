#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int num,tmp;
    cin>>num;
    vector<int>a(num);
    vector<int>b(num);
    for(int i=0; i<num; i++){
        cin>>b[i];
        a[i] = b[i];
    } 
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    for(int i=0; i<num; i++){
        cout<<lower_bound(a.begin(),a.end(),b[i])-a.begin()<<" ";
    }
    return 0;
}