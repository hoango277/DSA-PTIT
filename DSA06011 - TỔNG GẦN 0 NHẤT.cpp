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
      int a[n];
      long long ans = 1e18;
      long long ans1;
      for(int i = 0; i<n; i++)
         cin >> a[i];
      for(int i = 0; i<n-1; i++)
      {
         for(int j = i+1; j<n; j++)
         {
            if(abs(a[i] + a[j]) < abs(ans))
            {
               ans = abs(a[i] + a[j]);
               ans1 = a[i] + a[j];
            }
         }
      }
      cout << ans1 << endl;
   }
}
