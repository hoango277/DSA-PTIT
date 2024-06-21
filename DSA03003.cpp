#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      int a[n];
      for(int &i : a) cin >> i;
      sort(a, a+n);
      long long ans = 0;
      for(int i = 0; i<n; i++)
      {
         ans += (a[i]*(i))%mod;
         ans %= mod;
      }
      cout << ans << endl;
   }

}