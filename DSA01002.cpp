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
   int t;
   cin >> t;   
   while(t--)
   {
      int n, k;
      cin >> n >> k;
      int a[k+5] = {};

      for(int i = 1; i<=k; i++)
      {
         cin >> a[i];
      }
      int check = 1;
      for(int i = 1; i<=k;i++)
      {
         if(a[i] != n-k+i)
         {
            check = 0;
         }
      }
      if(check)
      {
         for(int i = 1; i<=k; i++)
         {
            cout << i << ' ';
         }
      }
      else
      {
      int l = k;
      while(a[l] == n-k+l && l)
      {
         l--;
      }
      a[l]++;
      for(int i = l+1; i<=k; i++)
      {
         a[i] = a[i-1] + 1;
      }
      for(int i = 1; i<=k; i++)
      {
         cout << a[i] << ' ';
      }
      }
      cout << endl;
      
   }
}