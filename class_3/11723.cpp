#include<iostream>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,temp;
    int bit=0;
    cin>>n;
    string tmp;
    for(int i=0; i<n; i++){
        cin>>tmp;
        if(tmp=="add"){
            cin>>temp;
            bit|=(1<<temp);
        }
        else if(tmp == "remove"){
            cin>>temp;
            bit &= ~(1<<temp);
        }
        else if(tmp == "check"){
            cin>>temp;
            if(bit&1<<temp){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"0"<<"\n";
            }
        }
        else if(tmp == "toggle"){
            cin>>temp;
            bit^=(1<<temp);
        }
        else if(tmp == "all"){
            bit = (1<<21) -1;
        }
        else if(tmp == "empty"){
            bit = 0;
        }
    }
    return 0;
}