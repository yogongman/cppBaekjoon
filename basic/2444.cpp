#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<i*2-1; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n-1; i>=0; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<i*2-1; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}