#include<iostream>
using namespace std;
int main(){
    int n;
    long long int arr[101] = {0,};
    cin>>n;
    arr[0] = 0;
    arr[1]  = 1;
    if(n == 0){
        cout<<arr[0];
        return 0;
    }
    else if(n == 1){
        cout<<arr[1];
        return 0;
    }
    else{
        for(int i=2; i<=n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        cout<<arr[n];
        return 0;
    }
    
}