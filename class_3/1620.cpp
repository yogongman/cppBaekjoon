#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int n, m;
vector<string> v;
map<string, int> ma;

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m;
  int ansIdx;
  string ansStr;
  string name;

  for(int i = 0 ; i < n ; i++)
  {
    cin >> name;
    v.emplace_back(name);
    ma.insert(pair<string, int>(name, i+1));
  }

  for(int i = 0 ; i < m ; i++)
  {
    cin >> ansStr;
    if(atoi(ansStr.c_str()))
    {
      ansIdx = stoi(ansStr);
      cout << v[ansIdx-1] << '\n';
    }
    else
    {
      cout << ma[ansStr] << '\n';
    }
  }
}

// https://holygod.tistory.com/23 이곳 참고함 