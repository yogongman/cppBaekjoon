#include<bits/stdc++.h>
using namespace std;
int A,B,C;
using ll = long long;
int cnt = 0;
ll pow(ll a,ll b, ll c){
    if(b==1){ // basecondition
        cnt+=1;
        return a;
    }
    else{
        cnt+=1;
        ll tmp = pow(a,b/2,c);
        if(b%2) return((tmp*tmp)%c*a)%c;
        else return(tmp*tmp)%c;
    }
}
int main(){
    cin>>A>>B>>C;
    cout<<pow(A%C,B,C);
    
}