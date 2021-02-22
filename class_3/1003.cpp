#include<iostream>
#include<vector>
using namespace std;
int a[50]={0,1,};
int fibonacci(int n){
    if(n==0 || n==1){
        return a[n];
    }
    else if(a[n]==0){
        a[n] = fibonacci(n-1) + fibonacci(n-2);
    }
    return a[n];
}
int main(){
    int n,tmp; 
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>tmp;
        if(tmp==0){
            cout<<1<<" "<<0<<"\n";
        }
        else{
            cout<<fibonacci(tmp-1)<<" "<<fibonacci(tmp)<<"\n";
        }
    }
    return 0;
}