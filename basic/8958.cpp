#include <iostream>
#include <string>
using namespace std;
int main(){
    int count,n;
    int total[1000] = {0};
    cin >>n;
    string a[1000];
    for(int i=0; i<n; i++){
        cin >> a[i];
        count = 0;
        for(int j=0; j<a[i].size(); j++){
            if(a[i][j] == 'O'){
                count++;
            }
            else if(a[i][j]=='X'){
                count = 0;
            }
            total[i] += count;
        }
    }
    for(int i=0; i<n; i++){
        cout<<total[i]<<endl;
    }
    return 0;
}