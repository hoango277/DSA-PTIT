#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int k;
      cin >> k;
      string s;
      cin >> s;
      map<char, int> m;
      priority_queue<int> pq;
      for(auto i: s)
      {
         m[i]++;
      }
      for(auto i : m)
      {
         pq.push(i.second);
      }
      while(k--)
      {
         int x = pq.top();
         pq.pop();
         x--;
         pq.push(x);
      }
      long long ans = 0;
      while(pq.size())
      {
         ans += pq.top()*pq.top();
         pq.pop();
      }
      cout << ans << endl;
   }
}