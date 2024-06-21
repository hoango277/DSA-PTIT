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
   int n;
   cin >> n;
   char a[n+5];
   for(int i = 1; i<=n; i++)
   {
      a[i] = 'A';
   }
   while(1)
   {
      for(int i = 1; i<=n; i++)
         {
            cout << a[i];
         }
         cout <<' ';
      int l = n;
      while(a[l] == 'B' && l)
      {
         a[l] = 'A';
         l--;
      }
      if(l==0)
      {
         break;
      }
      else
      {
         a[l] = 'B';
      }
   }
   cout << endl;
   }
}