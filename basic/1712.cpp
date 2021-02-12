#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(0>=c-b){
        cout<<-1;
        return 0;
    }

    cout<<(int)(a/(c-b))+1;
    return 0;
    

}