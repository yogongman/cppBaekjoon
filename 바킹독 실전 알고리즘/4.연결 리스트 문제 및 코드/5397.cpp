#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        list<char>L={};
        string a;
        cin>>a;
        auto t = L.begin();
        for(auto i:a){
            if(i == '<'){
                if(t!=L.begin()) t--;
            }
            else if(i=='>'){
                if(t!=L.end()) t++;
            }
            else if(i == '-'){
                if(t!=L.begin()){
                    t--;
                    t = L.erase(t);
                }
            }
            else{
                L.insert(t,i);
            }
        }
        for(auto i=L.begin(); i != L.end(); i++){
            cout<<*i;
        }
        cout<<"\n";
    }
    
}
// < == 60
// > == 62