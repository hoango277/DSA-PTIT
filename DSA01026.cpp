#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n)
{
   if(a[1] != 8 || a[n] != 6)
      return 0;
   for(int i = 2; i<=n; i++)
   {
      if(a[i] == 8 && a[i-1] == 8)
         return 0;
   }
   int b[n+5] = {};
   int ans = 0;
   for(int i = 1; i<=n-3; i++)
   {
      if(a[i] == 6 && a[i+1] == 6 && a[i+2] == 6 && a[i+3] == 6)
      {
         return 0;
      }
   }
   return 1;
}

int main()
{
   int n;
   cin >> n;
   int a[n+5] = {};
   for(int i = 1; i<=n; i++)
   {
      a[i] = 6;
   }
   while(1)
   {
      if(check(a, n))
      {
         for(int i = 1; i<=n; i++)
         {
            cout << a[i];
         }
         cout << endl;
      }
      int l = n;
      while(a[l] == 8 && l)
      {
         a[l] = 6;
         l--;
      }
      if(l==0)
      {
         break;
      }
      else
      {
         a[l] = 8;
      }
   }
}