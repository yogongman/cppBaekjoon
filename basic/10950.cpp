#include<iostream>

using namespace std;

int main(){

    int t,a,b;
    
    cin>>t;

    int n[t+1];

    for(int i=0; i<t; i++){
        cin>> a>>b;
        n[i] = a+b;
    }
    for(int i=0; i<t; i++){
        cout << n[i]<<endl;
    }
    return 0;
}