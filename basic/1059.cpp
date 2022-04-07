#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int l,n,res = 0;
    int min,max;
    int tmp;
    vector<int> arr;
    arr.push_back(1001);
    arr.push_back(0);
    cin>>l;
    for(int i=0; i<l; i++){
        cin>>tmp;
        arr.push_back(tmp);
    }
    cin>>n;
    for(int i=0; i<l; i++){
        if(arr[i] == n){
            cout<<0;
            return 0;
        }
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i]<n && n<arr[i+1]){
            min = arr[i];
            max = arr[i+1];
        }
    }
    for(int i=min+1; i<max; i++){
        for(int j=i+1; j<max; j++){
            if(i<=n && n<=j )  res++;
        }
    }
    cout<<res;
    return 0;
    
    
}