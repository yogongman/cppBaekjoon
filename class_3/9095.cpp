#include<iostream>
using namespace std;
int a[11];
int h(int n){
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    for(int i=4; i<=n; i++){
        a[i] = a[i-1]+a[i-2]+a[i-3];
    }
    return a[n];
}
int main(){
    int num,tmp;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>tmp;
        cout<<h(tmp)<<"\n";
    }
    return 0;
}