#include<bits/stdc++.h>
using namespace std;
map<int, int> m;

bool cmp(int a, int b)
{
   if(m[a] == m[b])
   {
      return a<b;
   }
   return m[a] > m[b];
}


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      int a[n];
      for(auto &i : a) 
      {
         cin >> i;
         m[i]++;
      }
      sort(a, a+n, cmp);
      for(auto i : a)
      {
         for(int j = 0; j<m[i]; j++)
         {
            cout << i << ' ';
         }
         m[i] = 0;
      }
      m.clear();
      cout << endl;
   }
}