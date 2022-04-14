#include<iostream>
using namespace std;
int main(){
    int p,n,m;
    cin>>p;
    for(int i=0; i<p; i++){
        cin>>n>>m;
        int a = 1, b = 1, c = 0;
        while(1){
            int tmp = (a + b) % m;
            a=b;
            b=tmp;
            c++;

            if(a == 1 && b == 1){
                break;
            }
        }
        cout<<n<<" "<<c<<"\n";
    }
    return 0;
}