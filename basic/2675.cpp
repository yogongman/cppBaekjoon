#include <iostream>
#include <string>

using namespace std;
int main(){
    int n;
    int m[1000];
    string a[1000];
    cin >> n;
    for(int i =0; i<n; i++){
        cin>>m[i]>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<a[i].size(); j++){
            for(int k=0; k<m[i]; k++){
                cout<<a[i][j];
            }
        }
        cout<<"\n";
    }
    return 0;
     
}