#include<iostream>
using namespace std;
int main(){
    int a[1000]={0};
    int num;
    cin>>num;
    a[0] = 1;
    a[1] = 2;
    for(int i=2; i<num; i++){
        a[i] = (a[i-1] + a[i-2])%10007; 
    }
    cout<<a[num-1];
    return 0;
}