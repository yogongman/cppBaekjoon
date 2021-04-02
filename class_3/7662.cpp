#include<iostream>
#include<set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char c;
    int tc,n,tmp;
    cin>>tc;
    while(tc--){
        cin>>n;
        multiset<int> ar;
        while(n--){
            cin>> c >> tmp;
            if(c=='I'){
                ar.insert(tmp);
            }
            else{
                if(tmp == -1 && !ar.empty()){
                    ar.erase(ar.begin()); // begin = 시작 값 = 최소값
                }
                else if(tmp == 1 && !ar.empty()){
                    auto end_i = ar.end();
                    end_i--;
                    ar.erase(end_i);
                }
            }
        }
        if(ar.empty()) cout<<"EMPTY"<<"\n";
        else{
            auto end = ar.end();
            end--;
            cout<<*end<<" "<<*ar.begin()<<"\n";
        }
    }
    
    return 0;

}