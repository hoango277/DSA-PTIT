#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
   return a>b;
}

int main()
{
   int n;
   cin >> n;
   int a[n+1];
   vector<int> le;
   vector<int> chan;
   for(int i = 1; i<=n; i++)
   {
      cin >> a[i];
      if(i%2)
         le.push_back(a[i]);
      else
         chan.push_back(a[i]);
   }
   sort(le.begin(), le.end());
   sort(chan.begin(), chan.end(), cmp);
   int x = 0;
   int y = 0;
   for(int i = 1; i<=n; i++)
   {
      if(i%2)
      {
         cout << le[x++] << ' ';
      }
      else
         cout << chan[y++] << ' ';
   }
}