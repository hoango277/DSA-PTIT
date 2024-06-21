#include <bits/stdc++.h>
using namespace std;
int n;
string tmp;      string s;

vector<string> ans;

void Try(int i)
{
   for(int j = i; j<s.size(); j++)
   {
      tmp+=s[j];
      ans.push_back(tmp);
      Try(j+1);
      tmp.pop_back();
   }
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      tmp.clear();
      ans.clear();
      cin >> n;
      cin >> s;
      sort(s.begin(), s.end());
      Try(0);
      for(auto i : ans)
      {
         cout << i << ' ';
      }
      cout << endl;
   }
}