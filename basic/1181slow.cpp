#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    vector<string>a;
    string b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>b;
        a.push_back(b);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].size()>a[j].size()){
                swap(a[i],a[j]);
            }
            if(a[i].size()==a[j].size()){
                if(a[i].compare(a[j])>0) swap(a[i],a[j]);
            }            
        }
    }
    a.erase(unique(a.begin(),a.end()),a.end());
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<"\n";
    }
    return 0;
}