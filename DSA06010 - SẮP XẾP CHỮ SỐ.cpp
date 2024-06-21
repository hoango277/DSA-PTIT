#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      map<char, int> m;
      cin.ignore();
      string s;
      getline(cin, s);
      for(auto i : s) m[i]++;
      for(auto i : m) cout << i.first << ' ';
      cout << endl;
   }
}
