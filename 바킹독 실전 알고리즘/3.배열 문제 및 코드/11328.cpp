#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,answer;
    int ar[26]={0,},br[26]={0,};
    cin>>N;
    string a,b;
    //97~122
    for(int i=0; i<N; i++){
        answer=1;
        fill(&ar[0],&ar[25],0);
        fill(&br[0],&br[25],0);
        cin>>a>>b;
        for(auto ch: a){
            ar[ch-97]++;
        }
        for(auto ch: b){
            br[ch-97]++;
        }
        for(int i=0; i<26; i++){
            if(br[i]!=ar[i]){
               answer--;
               break; 
            }
        }
        if(answer) cout<<"Possible"<<"\n";
        else cout<<"Impossible"<<"\n";
    }
    return 0;

}