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
      char a[k+5] = {};
      for(int i = 1; i<=k; i++)
         a[i] = i;
      while(1)
      {
         for(int i = 1; i<=k; i++)
         {
            cout << char(a[i]+'A'-1);
         }
         cout << endl;
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
      cout << endl;
   }
}