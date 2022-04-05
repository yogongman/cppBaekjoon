#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,itmp,g=0;
        float total=0,avg;
        float tmp;
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>itmp>>tmp;
            total+=tmp*float(itmp);
            g += itmp;
        }
        cout<<fixed;
        cout.precision(1);
        cout<<g<<" "<<total/float(g)<<"\n";
    }
    return 0;
}