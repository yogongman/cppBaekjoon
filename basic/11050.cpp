#include<iostream>
using namespace std;
int fac(int num){
    if(num==0) return 1;
    int res = 1;
    for(int i=num; i>=1; i--){
        res*=i;
    }
    return res;
}
int main(){
    int n,r;
    cin >> n >>r;
    cout << fac(n)/(fac(r)*fac(n-r));
    return 0;
}