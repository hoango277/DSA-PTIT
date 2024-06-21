#include<bits/stdc++.h>
using namespace std;

bool check(char a[], int n)
{
   if(a[1] != 'H' || a[n] != 'A') return 0;
   for(int i = 2; i<=n; i++)
   {
      if(a[i] == 'H' && a[i] == a[i-1])
         return 0;
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
   char a[n+5] = {};
   vector<string> vs(1000000,"");
   for(int i = 1; i<=n; i++)
   {
      a[i] = 'H';
   }
   int x = 0;
   while(1)
   {
      
      if(check(a, n))
      {
         for(int i = 1; i<=n; i++)
         {
            vs[x] += a[i];
         }
         x++;
      }
      int l = n;
      while(a[l] == 'A' && l)
      {
         a[l] = 'H';
         l--;
      }
      if(l==0)
      {
         break;
      }
      else
      {
         a[l] = 'A';
      }
   }
   sort(vs.begin(), vs.begin()+x);
   for(int i = 0; i<x; i++)
   {
      cout << vs[i] << endl;
   }
   }
}