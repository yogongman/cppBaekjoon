#include <iostream>
using namespace std;
int gcd(int a,int b){
    int tmp;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    while(1){
        int gcd;
        gcd = a%b;
        if(gcd==0) return b;
        a=b;
        b=gcd;
    }
}
int main(){
    int a,b;
    cin >>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<a*b/gcd(a,b);
}