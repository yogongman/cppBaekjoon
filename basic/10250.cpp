#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,h,w,n;
    cin >> t;
    vector<int> room(t);
    for(int i=0; i<t; i++){
        cin>>h>>w>>n;
        if(n%h == 0){
            room[i] = (h*100)+((n/h));
        }
        else{
            room[i] = ((n%h)*100) + ((n/h)+1);
        }
    }
    for(int i=0; i<t; i++){
        cout<<room[i]<<endl;
    }
    return 0;
}