#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    char op;
    int s[100] = {0, };
    int max = -1;
    int count = 0;
    cin>>a;
    for(int i=0; i<a.size(); i++){
        a[i] = toupper(a[i]);
        s[int(a[i]-65)]++;
    }
    for(int i=0; i<26; i++){
        if(max<s[i]){
            max = s[i];
        }
    }
    for(int i=0; i<26; i++){
        if(s[i] == max){
            count++;
            op = i+65;
        }
    }
    if(count == 1){
        cout<<op;
    }
    else cout<<"?";
    return 0;
}

