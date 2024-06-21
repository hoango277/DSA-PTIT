#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int k)
{
   int sum = 0;
   for(int i = 1; i<=n; i++)
   {
      if(a[i] == 1)
      sum++;
   }
   return sum == k;
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
   
   int n,k;
   cin >> n >> k;
   int a[n+5] = {};
   while(1)
   {
      if(check(a, n, k))
      {
         for(int i = 1; i<=n; i++)
         {
            cout << a[i];
         }
         cout <<endl;
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
}