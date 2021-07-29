#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int n;
int mx;
int main(){
    cin>>n;
    int a = n;
    int tmp;
    while(n--){
        cin>>tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(),arr.end());
    for(int i=1; i<=a; i++){
        mx = max(mx, i*arr.back());
        arr.pop_back();
    }
    cout<<mx;
}