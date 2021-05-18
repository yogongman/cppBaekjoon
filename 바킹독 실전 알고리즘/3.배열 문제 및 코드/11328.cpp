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
        cin>>a>>b;
        for(auto ch: a){
            ar[ch-97]++;
        }
        for(auto ch: b){
            br[ch-97]++;
        }
        for(int i=0; i<26; i++){
            if(br[i]!=ar[i]){
               answer=0;
               break; 
            }
            else answer=1;
        }
        if(answer) cout<<"Possible"<<"\n";
        else cout<<"Impossible"<<"\n";
        fill(ar,ar+26,0);
        fill(br,br+26,0);
    }
    return 0;

}

//  위에가 맞은 것

// 밑에는 오답
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int N,answer=1;
//     int ar[26]={0,},br[26]={0,};
//     cin>>N;
//     string a,b;
//     //97~122
//     for(int i=0; i<N; i++){
//         cin>>a>>b;
//         for(auto ch: a){
//             ar[ch-97]++;
//         }
//         for(auto ch: b){
//             br[ch-97]++;
//         }
//         for(int i=0; i<26; i++){
//             if(br[i]!=ar[i]){
//                answer=0;
//                break; 
//             }
//         }
//         if(answer) cout<<"Possible"<<"\n";
//         else cout<<"Impossible"<<"\n";
//         fill(ar,ar+26,0);
//         fill(br,br+26,0);
//     }
//     return 0;
// }
