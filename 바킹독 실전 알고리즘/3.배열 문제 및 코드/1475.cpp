#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string N;
    int idx[10]={0,}; //ascii 48~57
    int sixnine;
    int max;
    cin>>N;
    for(auto i: N){
        if(i=='6'||i=='9'){
            idx['6'-48]++;
            idx['9'-48]++;
        }
        else{
            idx[i-48]++;
        }
    }
    sixnine = (idx['6'-48]+1)/2;
    idx['6'-48]=0;
    idx['9'-48]=0;
    max = *max_element(idx,idx+10);
    if(sixnine>max){
        cout<<sixnine;
    }
    else{
        cout<<max;
    }
}