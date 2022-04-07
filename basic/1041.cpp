#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int n;
    long long int f,s,t;
    long long int res = 0;
    long long int mx=0;
    cin>>n;
    // n = 1이면 5면 전부
    // n = 2 이상 부터 세 면이 보이는 주사위 = 4개 고정, 두 면이 보이는 주사위 4(2n-3)개
    //한 면이 보이는 주사위 4(2n-3) + (n-2)^2개
    long long int arr[6];
    long long int m[3];
    for(int i=0; i<6; i++){
        cin>>arr[i];
        res+=arr[i];
        mx = max(mx,arr[i]);
    }
    for(int i=0; i<3; i++){
        m[i] = min(arr[i],arr[5-i]);
    }
    if(n == 1){
        cout<<res-mx;
    }
    else{
        sort(m, m+3);
        f = m[0];
        s = f+m[1];
        t = s+m[2];
        res = 4*t + 4*(2*n-3)*s + (4*(n-1)*(n-2)+(n-2)*(n-2))*f;
        cout<<res;
        
    } 
    return 0;
}