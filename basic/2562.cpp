#include <iostream>
using namespace std;
int main(){
    int a[9];
    int max=0;
    for(int i=0; i<9; i++){
        cin>>a[i];
    }
    for(int i=0; i<9; i++){
        if(a[max]<a[i]) max = i;
    }
    cout<<a[max]<<endl;
    cout<<max+1;
    return 0;
}