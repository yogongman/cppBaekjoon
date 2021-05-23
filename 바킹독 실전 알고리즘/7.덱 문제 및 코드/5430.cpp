#include<bits/stdc++.h>
using namespace std;
string P,in;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T,n;
    bool err=0, dir=1;
    cin>>T;
    while(T--){
        err=0;
        dir = 1;
        deque<int> num;
        cin>>P>>n>>in;
        int i=0;
        
        while(in[i]!='\0'){
            int tmp = 0;
            while(in[i]>='0' && in[i]<='9'){
                tmp*=10;
                tmp+=int(in[i]-'0');
                i++;
            }
            if(tmp){
                num.push_back(tmp);
            }
            i++;
        }
        for(auto j:P){
            if(j=='R'){
                dir = !dir;
            }  
            else if(j=='D'){
                if(num.empty()){
                    cout<<"error\n";
                    err=true;
                    break;
                }
                if(dir){
                    num.pop_front();
                }
                else{
                    num.pop_back();
                }
            }
        }
            if(!err){
                if(dir){
                    cout<<"[";
                    while(!num.empty()){
                        cout<<num.front();
                        num.pop_front();
                        if(!num.empty()) cout<<",";
                    }
                    cout<<"]\n";
                }
                else{
                    cout<<"[";
                    while(!num.empty()){
                        cout<<num.back();
                        num.pop_back();
                        if(!num.empty()) cout<<",";
                    }
                    cout<<"]\n";
                }
            }
    }
}