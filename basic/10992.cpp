#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        if(i==1|| i==n){
            for(int k=1; k<=i*2-1; k++){
                cout<<"*";
            }
        }
        else{
            for(int k=1; k<=i*2-1; k++){
                if(k == 1|| i*2-1 == k){
                    cout<<"*";
                }
                else cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}