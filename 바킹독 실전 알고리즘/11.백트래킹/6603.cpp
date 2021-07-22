#include<bits/stdc++.h>
using namespace std;
int arr[15];
int a[15];
bool isused[15];
int n;
void func(int idx,int k){ //k는 원소의 개수
    if(idx == 6){
        for(int i=0; i<6; i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    int pre = -1;
    for(int i=0; i<k; i++){
        if(!isused[i] && a[idx-1]<= arr[i]){
            pre = arr[i];
            isused[i] = 1;
            a[idx] = arr[i];
            func(idx+1,k);
            isused[i] = 0;
        }
    }
}
int main(){
    while(1){
        cin>>n;
        if(n == 0) break;
        isused[15] = {0,};
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        func(0,n); 
        cout<<"\n";
    }
}