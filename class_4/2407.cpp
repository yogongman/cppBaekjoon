#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string fac[101][101];
string add_str(string a, string b){
    int sum=0;
    string result;
    while(!a.empty()||!b.empty()||sum){
        if(!a.empty()){
            sum+=a.back() - '0';
            a.pop_back();
        }
        if(!b.empty()){
            sum+=b.back() - '0';
            b.pop_back();
        }
        result.push_back((sum%10)+'0');
        sum /= 10;
    }
    reverse(result.begin(),result.end());
    return result;
}
string comb(int n, int m){
    if(n==m|| m==0) return "1";
    string &result = fac[n][m];
    if(result!="")  return result;

    result = add_str(comb(n-1,m-1),comb(n-1,m));
    return result;
}
int main(){
    int n,m;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    cout<<comb(n,m);
}