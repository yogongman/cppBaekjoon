#include <iostream>
using namespace std;
int main() {
    int a,b,v;
    cin >> a >> b >> v;
    int c = 1;
    c += (v-a)/(a-b);
    if((v-a)%(a-b) != 0)
        c++;
    if(a >= v)
        cout << "1";
    else
        cout << c;
    return 0;
}