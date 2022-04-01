#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int t=0;
    for(int i=0; i<5; i++){
        cin>>arr[i];
        t+=arr[i]*arr[i];
    }
    cout<<t%10;
    return 0;
}