#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    int cnt = 0;
    for(int i = n/5; i>=0; i--){
        for(int j = (n-i*5)/3; j>=0; j--){
            if(i*5 + j*3 == n){
                cnt = i+j;
                cout<<cnt;
                return 0;                
            }
        }
    }
    if(cnt == 0) cout<<-1;
    return 0;
}