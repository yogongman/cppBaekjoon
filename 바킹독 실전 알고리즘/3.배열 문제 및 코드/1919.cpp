#include<bits/stdc++.h>
using namespace std;
int main(){
    //97~122
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer = 0;
    int a[26]={0,};
    int b[26]={0,};
    string x,y;
    cin>>x>>y;
    for(auto i: x){
        a[i-97]++;
    }
    for(auto i: y){
        b[i-97]++;
    }
    for(int i=0; i<26; i++){
        if(a[i]>b[i]) answer+= a[i]-b[i];
        else if(a[i]<b[i]) answer +=b[i]-a[i];
    }
    cout<<answer;

}