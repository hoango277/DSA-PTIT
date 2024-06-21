#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      int a[n];
      for(int &i: a) cin >> i;
      sort(a, a+n);
      ll x = 0, y = 0;
      for(int i = 0; i<n; i+=2)
      {
         x *= 10;
         x+=a[i];
      }
      for(int i = 1; i<n; i+=2)
      {
         y *= 10;
         y+=a[i];
      }
      cout << x + y << endl;
   }
}