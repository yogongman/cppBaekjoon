#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int>a;
    int x,y;
    string b;
    while(1){
        cin >> x;
        if(x==0)  break;
        b = to_string(x);
        if(b.size() % 2 == 0){
            for(int i=0; i<b.size()/2; i++){
                if(b[i]==b[b.size()-1-i]){
                  y=1;  
                }
                if(b[i]!=b[b.size()-1-i]){
                    y=0;
                    break;
                }
            }
            a.push_back(y);
        }
        else if(b.size()%2 == 1){
            for(int i=0; i<((b.size()+1)/2); i++){
                if(b[i] == b[b.size()-i-1]){
                    y=1;
                }
                if(b[i]!=b[b.size()-i-1]) {
                    y=0;
                    break;
                }
            }
            a.push_back(y);
        }
    }
    for(int i=0; i<a.size(); i++){
        if(a[i]==1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0;
}