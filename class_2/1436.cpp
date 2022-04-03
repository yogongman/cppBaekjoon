#include<iostream>
#include<string>
using namespace std;
bool check(string a){
    if(a.size()<3) return false;
    for(int i=0; i<a.size()-2; i++){
        if(a[i] == '6' && a[i+1] == '6' && a[i+2] == '6'){
            return true;
        }
    }
    return false;
}
int main(){
    int i=0,n,res;
    int count=0;
    cin>>n;

    for(;;){
        i++;
        if(check(to_string(i))) count++;
        if(count == n){
            res = i;
            break;
        }
    }
    cout<<res;
    return 0;
}