#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t,n;
    int x,y;
    cin>>t;
    bool a[1000001];
    fill_n(a, 1000001, true);
    a[1] = false;

    for(int i=2; i<=1000; i++){
        if(a[i]){
            for(int j = i*i; j<=1000000; j+=i){
                a[j] = false;
            }
        }
    }
    for(int j = 0; j<t; j++){
        cin>>n;
        for(int i=n/2; i>=2; i--){
            x = i;
            y = n-i;
            if(a[x] && a[y]){
                cout<<x<<" "<<y;
                break;
            }
        }
        cout<<"\n";
    }

    
    
    return 0;
}