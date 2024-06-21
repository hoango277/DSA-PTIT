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
      int n, x;
      cin >> n >> x;
      int a[n];
      for(auto &i : a) cin >> i;
      int check = 0;
      for(auto i : a)
      {
         if(i==x)
            check = 1;
      }
      if(check)
         cout << check;
      else
         cout << "-1";
      cout << endl;
   }
}