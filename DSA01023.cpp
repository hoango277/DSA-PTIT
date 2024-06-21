#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n, k;
      cin >> n >> k;
      int a[k+5] = {};
      for(int i = 1; i<=k; i++)
         a[i] = i;
      int b[k+5];
      for(int i = 1; i<=k; i++)
         cin >> b[i];
      int ans = 1;
      int check = 1;
      while(1)
      {
         check = 1;
         for(int i = 1; i<=k; i++)
         {
            if(a[i] != b[i])
            {
               check = 0;
            }
         }
         if(check)
         {
            break;
         }
         else
         {
         ans++;
         int l = k;
         while(a[l] == n-k+l && l)
         {
            l--;
         }
         a[l]++;
         if(l==0)
            break;
         else
         {
            for(int i = l+1; i<=k; i++)
            {
               a[i] = a[i-1] +1;
            }
         }
         }
      }
      cout << ans;
      cout << endl;
   }
}