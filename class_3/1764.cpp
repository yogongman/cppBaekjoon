#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    vector<string>d,db;
    string temp;
    cin >> n >> m;
    d.resize(n);
    for(int i=0; i<n; i++){
        cin>>d[i];
    }
    sort(d.begin(),d.end());
    for(int i=0; i<m; i++){
        cin >> temp;
        if(binary_search(d.begin(),d.end(),temp)){
            db.push_back(temp);    
        }
    }
    sort(db.begin(),db.end());
    cout<<db.size()<<"\n";
    for(int i=0; i<db.size(); i++){
        cout<<db[i]<<"\n";
    }
    return 0;
}