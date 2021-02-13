#include<iostream>
#include<bitset>
#include<typeinfo>
using namespace std;
int main(){
    int x,count;
    count = 0;
    cin>>x;
    bitset<7>a(x);
    for(int i=0; i<7; i++){
        if(a.test(i)){
            count++;
        }
    }
    cout << count;
    return 0;
}