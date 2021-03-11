#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
    int n,temp;
    int answer = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            answer+=a[j];
        }
    }
    cout<<answer;
}