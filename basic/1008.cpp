#include <iostream>
using namespace std;
int main(){
    int A,B;
    double C;
    cin>>A>>B;
    C = A/(double)B;
    cout<<fixed;
    cout.precision(10);
    cout<<C<<endl;
    return 0;
}