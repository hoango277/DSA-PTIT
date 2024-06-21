#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n, k;
      cin >> n >> k;
      int a[n];
      for(int &i : a) cin >> i;
      sort(a, a+n);
      long long ans = 0;
      if(n-k < k)
      {
         k = n-k;
      }
      for(int i = 0; i<k; i++)
         ans -= a[i];
      for(int i = k; i<n; i++)
      {
         ans+= a[i];
      }
      cout << abs(ans) << endl;
   }

}