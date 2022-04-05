#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int cnt = 0;
    for(int c = 0; c<a.size(); c++){
        char i = a[c];
        if(i == 'c'){
            if(a[c+1] == '=' || a[c+1] == '-'){
                cnt++;
                c++;
                continue;
            }
        }
        if(i == 'd'){
            if(a[c+1] == 'z' && a[c+2] == '='){
                cnt++;
                c += 2;
                continue;
            }
            else if(a[c+1] == '-'){
                cnt++;
                c++;
                continue;
            }
        }
        if(i == 'l'){
            if(a[c+1] == 'j'){
                cnt++;
                c++;
                continue;
            }
        }
        if(i == 'n'){
            if(a[c+1] == 'j'){
                cnt++;
                c++;
                continue;
            }
        }
        if(i == 's'){
            if(a[c+1] == '='){
                cnt++;
                c++;
                continue;
            }
        }
        if(i == 'z'){
            if(a[c+1] == '='){
                cnt++;
                c++;
                continue;
            }
        }
        cnt++;
    }
    cout<<cnt;
    return 0;
}