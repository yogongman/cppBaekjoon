#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
long long gcd(long long a, long long b){
    return b? gcd(b, a % b) : a;
}
int main(){
    long long a,b;
    cin>>a>>b;
    cout << string(gcd(a, b), '1');
    return 0;

}