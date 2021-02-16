#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    bool com(string a, string b){
        if(a.size() != b.size()){
            return a.size()<b.size();
        }
        else{
            return a < b;
        }
    }
int main(){
    int n,m;
    vector<string>a;
    string b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>b;
        a.push_back(b);
    }


    stable_sort(a.begin(),a.end(),com);

    a.erase(unique(a.begin(),a.end()),a.end()); // 중복 제거
    for(int i=0; i<a.size()-1; i++){
    cout<<a[i]<<"\n";
    }
    cout<<a[a.size()-1];
    return 0;

    // 선택정렬 구현 했으나 느렸음.

    // for(int i=0; i<n-1; i++){ 
    //     for(int j=i+1; j<n; j++){
    //         if(a[i].size()>a[j].size()){
    //             swap(a[i],a[j]);
    //         }
    //         if(a[i].size()==a[j].size()){
    //             if(a[i].compare(a[j])>0) swap(a[i],a[j]);
    //         }            
    //     }
    // }
    // a.erase(unique(a.begin(),a.end()),a.end());
    // for(int i=0; i<a.size(); i++){
    //     cout<<a[i]<<"\n";
    // }
    // return 0;
}