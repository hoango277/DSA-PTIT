#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n)
{
   int l = 1;
   int k = n;
   while(l<=k)
   {
      if(a[l] != a[k]) return 0;
      l++;
      k--;
   }
   return 1;
}

int main()
{
   int n;
   cin >> n;
   int a[n+5] = {};
   while(1)
   {
      if(check(a, n))
      {
         for(int i = 1; i<=n; i++)
         {
            cout << a[i] << ' ';
         }
         cout << endl;
      }
      int l = n;
      while(a[l] == 1 && l)
      {
         a[l] = 0;
         l--;
      }
      if(l==0)
      {
         break;
      }
      else
      {
         a[l] = 1;
      }
   }
}