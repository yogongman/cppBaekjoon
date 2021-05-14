#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[10]={0,};
    int m,t=1;
    string a;
    for(int i=0; i<3; i++){
        cin >> m;
        t*=m;
    }
    a = to_string(t);
    for(char c: a)
    {
        arr[c-48]++;
    }
    for(int i=0; i<10; i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}